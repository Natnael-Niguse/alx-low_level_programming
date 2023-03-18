#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_dnodeint_end - entry point
 * @head: para
 * @n: int
 * Return: node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newnode;
dlistint_t *temp = NULL;
newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->next = NULL;
newnode->n = n;
if (*head == NULL)
{
newnode->prev = NULL;
*head = newnode;
return (newnode);
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
newnode->prev = temp;
temp->next = newnode;
return (newnode);
}
}
