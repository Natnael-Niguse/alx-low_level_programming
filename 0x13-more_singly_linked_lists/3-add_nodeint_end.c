#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = (listint_t *) (malloc(sizeof(listint_t)));
	newnode->n = n;
	newnode->next = 0;

	if (*head == NULL)
	{
	*head = newnode;
	return (newnode);
	}
	while (temp->next != 0)
	{
	temp = temp->next;
	}
	if (!newnode)
	{
	return (NULL);
	}
	else
	{
	temp->next = newnode;
	return (newnode);
	}
}
