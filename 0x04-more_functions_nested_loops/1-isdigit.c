#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through 9).
 *@c: parameter
 * Return: 1 if c is a digit Returns 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 49 && c < 58)
		return (1);

	return (0);

