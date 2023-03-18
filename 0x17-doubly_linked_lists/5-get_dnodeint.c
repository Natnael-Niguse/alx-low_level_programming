#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - entry point
 * @head: para
 * @index: para
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp;
unsigned int i = 0;
temp = head;
while (temp != NULL && i < index)
{
temp = temp->next;
i++;
}
if (i == index && temp != NULL)
{
return (temp);
}
else
{
return (NULL);
}
}
