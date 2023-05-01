#include "lists.h"

/**
 * get_nodeint_at_index - func that returns the node at a certain
 * index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer param to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tmp = head;

	while (tmp && a < index)
	{
		tmp = tmp->next;
		a++;
	}

	return (tmp ? tmp : NULL);
}
