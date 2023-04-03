#include "main.h"

/**
  * _memset - function that fills memory with a constant byte
  * @s: string to change
  * @b: value to replace with
  * @n: number of bytes to change
  * Return: pointer
  */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	for (; n != 0; p++, n--)
	{
		*p = b;
	}
	return (s);
}
