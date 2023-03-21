#include "main.h"

/**
 * print_alphabet_x10 -  prints the alphabet 10 times, in lowercase
 *
 */

void print_alphabet_x10(void)
{
	int x;
	int y;

	for (y = 1; y <= 10; y++)
	{
		for (x = 97; x <= 122; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
