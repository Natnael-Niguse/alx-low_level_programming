#include <stdio.h>
#include <stdlib.h>
/*
 * Write a function that searches for 
 * a value in an array of integers using 
 * the Linear search algorithm
*/

int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            printf("Value checked array[%ld] = [%d]\n", i, array[i]);
            return (i);
        }
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
    }
    return (-1);
}
