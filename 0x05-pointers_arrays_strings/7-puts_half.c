#include "main.h"

/**
  * puts_half - prints half of the string
  * @str: string
  */

void puts_half(char *str)
{
	int i, k;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	i--;

	if ((i % 2) == 0)
	{
		k = i / 2;
		k++;
		while (k < i)
		{
			_putchar(str[k]);
			k++;
		}
		_putchar('\n');
	}
	else
	{
		k = (i - 1) / 2;

		while (k < i)
		{
			_putchar(str[k]);
			k++;
		}
		_putchar('\n');
	}
}
