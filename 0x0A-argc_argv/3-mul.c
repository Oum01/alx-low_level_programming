#include"main.h"

/**
 * main - program that multiplies two numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: (0) .
 **/

int main(int argc, char *argv[])
{
	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
