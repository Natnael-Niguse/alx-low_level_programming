#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: the character checked
 * Return: 1 fir uppercase and 0 otherwise
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
