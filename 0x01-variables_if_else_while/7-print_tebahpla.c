#include<stdio.h>

/**
  * main - prints lowercase alphabets in reverse
  * Return: returns 0
  */

int main(void)
{
	char abc;

	for (abc = 'z'; abc >= 'a'; abc--)
	{
		putchar(abc);
	}
	putchar('\n');
	return (0);
}
