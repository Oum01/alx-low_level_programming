#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head node of the linked list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node;

	node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}

	return (node);
}
