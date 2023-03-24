#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
	{
	char x, y;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x <= 14; x++)
	{
		if (x > 9)
	{
		_putchar('0' + (x / 10));
	}
	_putchar('0' + (x % 10));
	}
		_putchar('\n');
	}
}
