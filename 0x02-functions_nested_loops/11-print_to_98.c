#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - prints all real numbers from n to 98
  * @n: integer to be printed from
  * Return: void
  */

void print_to_98(int n)
{
	int c;

	if (n <= 98)
	{
		for (c = n; c <= 98; c++)
		{
			if (c == 98)
			{
				printf("%d", c);
			}
			else
			{
				printf("%d", c);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n >= 98) 
	{
		for (c = n; c >= 98; c--)
		{
			if (c == 98)
			{
				printf("%d", c);
			}
			else
			{
				printf("%d", c);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
