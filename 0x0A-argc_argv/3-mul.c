#include <stdio.h>
#include <stdlib.h>

/**
  * main - function that multiplies two numbers
  * @argc: size of argv array
  * @argv: the array
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int x, y, prod;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	prod = x * y;
	printf("%d\n", result);
	return (0);
}
