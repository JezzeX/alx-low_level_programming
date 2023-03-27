#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: string to be checked
  * Return: returns length of string
  */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
