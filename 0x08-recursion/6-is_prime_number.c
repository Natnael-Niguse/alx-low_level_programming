#include "main.h"

/**
 * helper - entry point
 * @num: input
 * @i: input
 * Return: 0
 */

int helper(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helper(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - entry piont
 * @n: input
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helper(n, 2));
	}
}
