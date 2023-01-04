#include "main.h"

/**
 * helper - entry point
 * @num: input
 * @psqrt: input
 * Return: -1
 */

int helper(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > num)
			return (-1);
		else
			return (helper(num, psqrt + 1));
	}
}

/**
 * _sqrt_recursion - entry point
 * @n: input
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helper(n, 0));
}
