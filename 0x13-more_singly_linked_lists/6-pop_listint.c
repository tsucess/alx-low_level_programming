#include "lists.h"

/**
 * pop_listint - func that deletes the head node of a linked list
 * @head: pointer param to the first element in the linked list
 *
 * Return: data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}
