#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list
 *
 * @head: A pointer to the head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head->next;
		temp = head;
		free(head);
	}
}
