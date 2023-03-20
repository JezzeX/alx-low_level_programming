#include<stdio.h>
/**
  * main - prints letters from a to z
  * Return: returns 0
  */

int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		putchar(abc);
	}
	putchar('\n');
	return(0);
}
