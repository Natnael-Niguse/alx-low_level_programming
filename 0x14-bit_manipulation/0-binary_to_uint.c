#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
int i, tot, len, mul;

tot = 0;
mul = 1;

len = strlen(b);

if (!b)
{
return (0);
}

for (i = (len - 1); i >= 0; i--)
{
if (b[i] < '0' || b[i] > '1')
{
return (0);
}
if (b[i] == '1')
{
tot += mul;
}
mul *= 2;
}
return (tot);
}
