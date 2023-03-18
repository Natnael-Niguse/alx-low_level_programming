#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * sum_dlistint - entry point
 * @head: para
 * Return: node
 */

int sum_dlistint(dlistint_t *head)
{
unsigned int sum = 0;
dlistint_t *temp = head;
if (head == NULL)
{
return (0);
}
while (temp != 0)
{
sum = sum + temp->n;
temp = temp->next;
}
return (sum);
}
