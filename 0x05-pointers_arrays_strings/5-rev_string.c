#include "main.h"

/**
  * rev_string - function to reverse a string
  * @s: string
  */

void rev_string(char *s)
{
	char tempstr[446];
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

	while (i >= 0)
	{
		tempstr[j] = s[i];
		j++;
		i--;
	}

	while (k <= j)
	{
		s[k] = tempstr[k];
		k++;
	}
}
