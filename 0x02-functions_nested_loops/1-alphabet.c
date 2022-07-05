#include "main.h"

/**
 * main - print alphabets in lowercase
 * print_alphabet - lowercase print a-z
 * Description - print_alphabet in lowercase
 *
 * Return : ALways void
 *
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
