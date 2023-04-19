#include <stdio.h>
#include "function_pointers.h"

/**
*array_iterator - execute finctions
*@array: the array
*@size: the size of array
*@action:the pointer to fanctions
*Return: to void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	i = 0;

	while (i < size)
	{
		action(array[i] i++);
	}
}
