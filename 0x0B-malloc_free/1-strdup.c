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
	int i;

	i = 0;

	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + 1));
	p = strdup(str);

	if (str == NULL || str[i] != p[i])
	{
		return (NULL);
	}
	else
	{
		return (p);
	}
}
