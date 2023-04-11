#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of characters
  * @size: size
  * @c: character to print
  * Return: pointer
  */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			a[n] = c;
		}
	}
	return (a);
}
