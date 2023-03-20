#include<stdio.h>
/**
  * main - prints all letters of the alphabet except q and e
  * Return: return 0
  */

int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if ( abc != 'e' && abc != 'q')
		{
			putchar(abc);
		}
	}
	putchar('\n');
	return (0);
}
