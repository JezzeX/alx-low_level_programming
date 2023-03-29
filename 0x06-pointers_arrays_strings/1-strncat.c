#include "main.h"

/**
  * _strncat - concatenates twwo strings only taking n bytes
  * @dest: first string
  * @src: second string
  * @n: number of bytes
  * Return: concatenated string
  */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	for (; *temp != '\0'; temp++)
	{
		;
	}

	for (; *src != '\0'; src++)
	{
		if (n == 0)
		{
			break;
		}
		else
		{
			*temp = *src;
			temp++;
			n--;
		}
	}
	return (dest);
}
