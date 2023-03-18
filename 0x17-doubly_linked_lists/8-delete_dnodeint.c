#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at index
* @head: Pointer to the head of the list.
* @index: Index of the node to delete.
*
* Return: 1 if succeeded, -1 otherwise.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp;
unsigned int i;

if (*head == NULL)
return (-1);

current = *head;
if (index == 0)
{
*head = current->next;
if (current->next != NULL)
current->next->prev = NULL;
free(current);
return (1);
}

for (i = 0; i < index - 1; i++)
{
if (current->next == NULL)
return (-1);
current = current->next;
}

temp = current->next;
if (temp == NULL)
return (-1);
current->next = temp->next;
if (temp->next != NULL)
temp->next->prev = current;
free(temp);

return (1);
}
