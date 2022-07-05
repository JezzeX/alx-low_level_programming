#include "main.h"
/* 
 * File: 0-putchar.c
 *
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
