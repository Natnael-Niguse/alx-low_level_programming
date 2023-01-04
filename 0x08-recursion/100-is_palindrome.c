#include "main.h"

/**
 * leg - entry piont
 * @s: pointer
 * Return: length
 */

int leg(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + leg(s + 1));
}

/**
 * cup - entry point
 * @i: index
 * @ln: length
 * @s: string
 * Return: 1 or 0
 */

int cup(int i, int ln, char *s)
{
	if (ln > 0)
	{
		if (s[i] == s[ln])
		{
			return (cup(i + 1, ln - 1, s));
		}
		else if (s[i] != s[ln])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - entry point
 * @s: pointer
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	return (cup(0, leg(s) - 1, s));
}
