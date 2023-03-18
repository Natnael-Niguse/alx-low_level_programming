#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position in a
* doubly linked list.
* @h: Pointer to a pointer to the head node of the list.
* @idx: The index of the list where the new node should be added.
* @n: The integer to be stored in the new node.
*
* Return: The address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *prev_node, *current_node;
unsigned int i;

if (h == NULL || idx > dlistint_len(*h))
return (NULL);

if (idx == 0)
return (add_dnodeint(h, n));

prev_node = NULL;
current_node = *h;
for (i = 0; i < idx; i++)
{
prev_node = current_node;
current_node = current_node->next;
}

if (current_node == NULL)
return (add_dnodeint_end(h, n));

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = prev_node;
new_node->next = current_node;
prev_node->next = new_node;
current_node->prev = new_node;

return (new_node);
}
