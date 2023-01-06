#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * chnum - check string
 * @str: array
 * Return: 0
 */

int chnum(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - enter
 * @argc: count arg
 * @argv: arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count = 1;
	int strtoint;
	int sum = 0;

	while (count < argc)
	{
		if (chnum(argv[count]))
		{
			strtoint = atoi(argv[count]);
			sum += strtoint;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
