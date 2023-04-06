#include "main.h"

/**
  * factorial - get factorial of n
  * @n: number to get factorial
  * Return: factorial
  */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
