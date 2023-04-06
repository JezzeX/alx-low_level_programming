#include "main.h"

/**
  * helper - helps main function
  * @n: number to be checked
  * @x: checks if n is divisible by x
  * Return: 0 or 1
  */

int helper(int n, int x)
{
	if (x > 9)
	{
		return (1);
	}
	else if (n % x != 0)
	{
		return (helper(n, ++x));
	}
	else
	{
		return (0);
	}
}

/**
  * is_prime_number - checks if n is prime
  * @n: number to be checked
  * Return: 0 or 1
  */

int is_prime_number(int n)
{
	if (n == 1 || n == -1 || n == 0)
	{
		return (0);
	}
	else
	{
		return (helper(n, 2));
	}
}
