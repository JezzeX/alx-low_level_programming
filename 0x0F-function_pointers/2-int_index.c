#include "function_pointers.h"
#include <stdlib.h>

/**
  * int_index - function that searches for an integer
  * @array: array of integers
  * @size: size of array
  * @cmp: pointer to the function to be used to compare values
  * Return: return index where match is found or -1 if fails
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
