#include "main.h"

/**
  * helper_function - helps main func find sqrt
  * @n: needs to be sqrt
  * @x: sqrt of n
  * Return: natural sqrt of n
  */

int helper_function(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x < n)
	{
		return (helper_function(n, ++x));
	}
	else
	{
		return (-1);
	}
}

/**
  * _sqrt_recursion - main function
  * @n: integer
  * Return: natural sqrt of n
  */

int _sqrt_recursion(int n)
{
	return (helper_function(n, 0));
}
