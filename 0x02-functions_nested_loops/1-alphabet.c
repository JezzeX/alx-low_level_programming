i#include "main.h"
/**
  * print_alphabet - prints the alphabet in lowercase
  * Return: returns 0
  */

void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}

	_putchar('\n');

}
