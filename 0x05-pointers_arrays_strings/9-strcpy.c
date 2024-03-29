#include "main.h"

/**
  * *_strcpy - copies the string pointed by src
  * @dest: char pointer
  * @src: char pointer 2
  * Return: dest pointer
  */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
