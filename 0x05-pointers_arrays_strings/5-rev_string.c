#include "main.h"
/**
 * rev_string - Write a function that reverses a string.
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int aux = 0;
	char ltemp;


	while (*(s + i) != '\0')
		i -= 1;
	i -= 1;

	while (aux < i)
	{
		ltemp = s[i];
		s[i] = s[aux];
		s[aux] = ltemp;
		aux++;
		i--;
	}
}
