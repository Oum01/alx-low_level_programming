#include "main.h"

/**
 * *str_concat - Concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 *
 * Return: the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *cont_str;
	int i, cont_i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	cont_str = malloc(sizeof(char) * len);

	if (cont_str == NULL)
	return (NULL);

	for (i = 0; s1[i]; i++)
		cont_str[cont_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		cont_str[cont_i++] = s2[i];

	cont_str[cont_i] = '\0';

	return (cont_str);
}

