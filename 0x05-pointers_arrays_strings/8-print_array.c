#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integer
 * @a: pointer
 * @n: pointer
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
