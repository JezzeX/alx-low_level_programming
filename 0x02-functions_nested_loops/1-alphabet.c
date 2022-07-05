#include "main.h"

/**
 * main - print alphabets in lowercase
 *
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
