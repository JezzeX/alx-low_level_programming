#include "main.h"

/**
  * _strcat - concatentes twwo strings
  * @dest: first sting
  * @src: second sting
  * Return: concatented string
  */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	for (; *temp != '\0'; temp++)
	{
		;
	}

	for (; *src != '\0'; src++)
	{
		*temp = *src;
		temp ++;
	}

	*temp = *src;
	return (dest);
}
