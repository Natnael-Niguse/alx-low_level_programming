#include <stdio.h>
#include <stdlib.h>
/*
 * Write a function that searches for
 * a value in a sorted array of integers using
 * the Binary search algorithm
 * */


int binary_search(int *array, size_t size, int value)
{
    size_t i, left = 0, right = (size - 1), mid;
    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        mid = (left + right)/2;
        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
        }
        printf("\n");
        if (value == array[mid])
            return (mid);
        else if (value < array[mid])
            right = (mid - 1);
        else
            left = (mid + 1);
    }
    return (-1);
}
