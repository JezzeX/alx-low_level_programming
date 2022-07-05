#include "main.h"
/*
 * main - Prints "_putchar" followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char sigh[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(sigh[i]);
	}
	_putchar('\n');
	return (0);
}
