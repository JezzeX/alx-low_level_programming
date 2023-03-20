#include<stdio.h>

/**
  * main - prints all possible different combinations of three digits
  * Return: returns 0
  */

int main(void)
{
	int num, num1, num2;

	for (num = '0'; num <= '9'; num++)
	{
		for (num1 = num + 1; num1 <= '9'; num1++)
		{
			for (num2 = num1 + 1; num2 <= '9'; num2++)
			{
				putchar(num);
				putchar(num1);
				putchar(num2);

				if (num == '7' && num1 == '8' && num2 == '9')
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
	}
	putchar('\n');
	return (0);
}
