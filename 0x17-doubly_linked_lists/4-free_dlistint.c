#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_dlistint - free node
 * @head: para
 * Return: node
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp, *current;

current = head;

while (current != NULL)
{
temp = current->next;
free(current);
current = temp;
}
}
