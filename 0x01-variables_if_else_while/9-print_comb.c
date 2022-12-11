#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(48 + a);
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
		a++;
		return (0);
}
