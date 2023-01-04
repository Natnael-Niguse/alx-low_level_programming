#include "main.h"

/**
 * _pow_recursion - entry point
 * @x: input
 * @y: input
 * Return: -1
 */

int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	res *= _pow_recursion(x, y - 1);
	return (res);
}
