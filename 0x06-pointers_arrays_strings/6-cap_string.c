#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int i, j;
	char *sym = ",;.!?\"(){} \t\n";

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			for (j = 0; sym[j]; j++)
				if (s[i - 1] == sym[j] || i == 0)
				{
					s[i] -= 32;
					break;
				}
	}
	return (s);
}
