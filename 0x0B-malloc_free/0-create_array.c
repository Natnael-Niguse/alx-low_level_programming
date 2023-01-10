#include "main.h"
#include <stdlib.h>

/**
 * create_array - Entry point
 * @size: parameter
 * @c: para
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	int z;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}

	for (z = 0; z < size; z++)
	{
		ptr[z] = c;
	}
	return (ptr);
}
