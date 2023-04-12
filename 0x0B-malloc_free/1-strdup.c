#include "main.h"

/**
* *_strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: string
*
* Return: returns a pointer to the duplicated string
* returns NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
	char *s;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	s = (char *)malloc((len * sizeof(char)) + 1);
	if (s == NULL)
		return (NULL);

	else
	{
		for (i = 0; i < len; i++)
			s[i] = str[i];
	}
	return (s);
}
