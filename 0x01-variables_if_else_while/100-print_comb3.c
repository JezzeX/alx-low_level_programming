#include<stdio.h>

/**
  * main - prints all possible different combinations of two digits
  * Return: returns 0
  */

int main(void)
{
	int num;
	int num1;

	for (num = '0'; num <= '9'; num++)
	{
		for (num1 = num + 1; num1 <= '9'; num1++)
		{
			putchar(num);
			putchar(num1);

			if (num == '8' && num1 == '9')
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
