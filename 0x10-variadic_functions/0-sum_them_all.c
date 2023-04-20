#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n : parameters
 * Return: sum and if n equal zero return it
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	if (n == 0)
		return (0);
	return (sum);
}
