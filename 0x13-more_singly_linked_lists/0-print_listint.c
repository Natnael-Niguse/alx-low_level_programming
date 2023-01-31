#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;

	while (temp != 0)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
