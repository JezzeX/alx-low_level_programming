#include "main.h"
/**
  * main - prints the alphabet in lowercase
  * Return: returns 0
  */

void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		putchar(abc);
	}

	putchar('\n');
	
	return (0);
}
