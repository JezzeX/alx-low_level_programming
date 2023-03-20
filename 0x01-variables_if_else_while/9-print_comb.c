#include<stdio.h>

/**
  * main - prints all possible combinations of single-digit numbers in asc order
  * Return: returns 0
  */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			continue;
		}
	}
		putchar('\n');
		return (0);
}
