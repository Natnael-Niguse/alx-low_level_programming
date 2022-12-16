#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of diagonal
 */

void print_diagonal(int n)
{
	int co, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 0; co < n; co++)
		{
			for (sp = 0; sp < co; sp++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
