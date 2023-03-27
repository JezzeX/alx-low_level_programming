#include "main.h"

/**
  * swap_int - function to swap the value of two integers
  * @a: first variable
  * @b: second variable
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
