#include<stdio.h>

/**
  * main - prints all numbers in base 16
  * Return: returns 0
  */

int main(void)
{
	int base16;

	for (base16 = '0'; base16 <= '9'; base16++)
	{
		putchar(base16);
	}

	for (base16 = 'a'; base16 <= 'f'; base16++)
	{
		putchar(base16);
	}
	putchar('\n');
	return (0);
}
