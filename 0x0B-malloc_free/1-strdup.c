#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - copy the string
  * @str: string to copy
  * Return: returns a pointer
  */

char *_strdup(char *str)
{
	char *ptr;
	int i, j;
	int count = 0;

	if (!str)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	ptr = malloc(sizeof(char) * count + 1);

	if (!ptr)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		ptr[j] = str[j];
	}
	ptr[j] = '\0';

	return (ptr);
}
