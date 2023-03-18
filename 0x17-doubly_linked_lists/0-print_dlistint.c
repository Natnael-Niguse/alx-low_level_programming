#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - entry point
 * @h: pointer
 * Return: print
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;

while (h != 0)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
