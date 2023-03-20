#include <stdio.h>
/**
  * main - prints letters from a to z
  * Return: returns 0
  */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar("\n");
	return(0);
}
