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

	p = malloc(sizeof(char));
	p = strdup(str);

	if (str == NULL || p == NULL)
	{
		return (NULL);
	}
	else
	{
		return (p);
	}
}
