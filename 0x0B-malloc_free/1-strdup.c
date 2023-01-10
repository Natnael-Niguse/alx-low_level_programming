#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: para
 * Return: null
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i, r;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);
	r = 0;

	while ((p[r] = str[r]) != '\0')
		r++;
	return (p);
}
