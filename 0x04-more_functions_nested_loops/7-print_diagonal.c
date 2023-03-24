#include "main.h"

/**
  * print_diagonal - that draws a diagonal line on the terminal
  * @n: The number of lines to draw
  * Return: empty
  */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)

		_putchar('\n');

	for (x = 0; x < n; x++)
	{
	for (y = 0; y <= x; y++)
	{
		if (y == x)
		_putchar('\\');
	else
		_putchar(32);
	}
	_putchar('\n');
	}
}
