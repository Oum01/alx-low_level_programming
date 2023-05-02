#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head || !*head)
		return;

	tmp = *head;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
