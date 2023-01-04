#include "main.h"

/**
 * factorial - enter point
 * @n: input
 * Return: if n > 0 - factorial of n
 * if n < 0 - 1 to indicate an error
 */

int factorial(int n)
{
	int res = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	res *= factorial(n - 1);
	return (res);
}
