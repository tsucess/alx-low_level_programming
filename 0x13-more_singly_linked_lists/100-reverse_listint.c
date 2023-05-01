#include "lists.h"

/**
 * reverse_listint - func that reverses a linked list
 * @head: pointer param to the first node in the list
 *
 * Return: pointer param to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
