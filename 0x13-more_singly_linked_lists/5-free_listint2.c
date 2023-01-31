#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == 0)
{
return;
}
else
{
while (temp != 0)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
}
*head = NULL;
}
