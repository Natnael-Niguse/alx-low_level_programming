#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
