#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: separator of the string
 * @n: parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list arg;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(arg, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);

	}
	va_end(arg);

	printf("\n");
}
