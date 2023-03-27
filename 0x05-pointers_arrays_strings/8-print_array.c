#include "main.h"
#include <stdio.h>

/**
  * print_array - prints n elements of an integer of arrays
  * @a - array
  * @n: length of array
  */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if ( i == 0)
		{
			printf("%d,", a[i]);
		}
		else if ( i == (n - 1))
		{
			printf(" %d", a[i]);
			_putchar('\n');
		}
		else
		{
			printf(" %d,", a[i]);
		}
		i++;
	}
}
