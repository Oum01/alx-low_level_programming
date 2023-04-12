#include "main.h"

/**
 * _strlen - find lenght of a string
 * @s: string
 * Return: the length of given string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * *argstostr - concatenates the arguments to string
 * @ac: the number of arguments
 * @av: the arguments
 * Return: return the string
 */

char *argstostr(int ac, char **av)
{
	int index, len = 0, i = 0, j = 0, index_string = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		len += _strlen(av[i]);
		i++;
	}
	string = malloc(sizeof(char) * len + (ac + 1));
	if (!string)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		index = 0;
		while (av[j][index])
		{
			string[index_string] = av[j][index];
			index_string++;
			index++;
		}
		j++;
		string[index_string] = '\n';
		index_string++;
		i++;
	}
	return (string);
}
