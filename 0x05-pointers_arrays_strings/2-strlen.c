#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string pointer
 * Return: return length of the string
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len = len + 1;
		*s++;
	}
	return (len);
}
