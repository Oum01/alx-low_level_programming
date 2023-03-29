#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to evaluate
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (i);
}
