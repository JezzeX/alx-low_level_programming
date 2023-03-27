#include "main.h"

/**
  * print_rev - print a string in reverse followed my new line
  * @s: string
  */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
