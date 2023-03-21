#include "main.h"

/**
  * print_alphabet_x10 - prints alphabets 10 times
  * Return: 0
  */

void print_alphabet_x10(void)
{
	char abc;

	for (int i = 1; i <= 10; i++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
	}
}
