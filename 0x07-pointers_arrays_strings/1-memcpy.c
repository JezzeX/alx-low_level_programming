#include "main.h"

/**
  * _memcpy - function that copies memory area
  * @dest: string to change
  * @src: string to copy from
  * @n: number of bytes
  * Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest1 = dest;
	char *src1 = src;

	for (; n != 0; dest1++, src1++, n--)
	{
		*dest1 = *src1;
	}
	return (dest);
}
