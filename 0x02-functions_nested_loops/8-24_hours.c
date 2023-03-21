#include "main.h"

/**
 * jack_bauer -  prints every minute of the day starting from HH:HH to MM:MM
 * Return: the result of two numbers.
 */

void jack_bauer(void)
{
	int sn, ln;

	for (sn = 0; sn <= 23; sn++)
	{
		for (ln = 0; ln <= 59; ln++)
		{
			_putchar('0' + (sn / 10));
			_putchar('0' + (sn % 10));
			_putchar(':');
			_putchar('0' + (ln / 10));
			_putchar('0' + (ln % 10));
			_putchar('\n');
		}
	}
}
