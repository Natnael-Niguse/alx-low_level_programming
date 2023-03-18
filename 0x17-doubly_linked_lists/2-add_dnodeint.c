#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - entry point
 * @head: para
 * @n: int
 * Return: n data
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode, *temp;
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
newnode->next = temp;
temp->prev = newnode;
*head = newnode;
return (newnode);
}
}
