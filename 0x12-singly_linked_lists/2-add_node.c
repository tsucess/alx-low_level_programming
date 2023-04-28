#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that add new node begining of list_t
 * @head: pointer param to structure
 * @str: string
 * Return: the adrres of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nwNode;
	unsigned int length = 0;

	newNode = malloc(sizeof(list_t));
	if (nwNode == NULL)
	{
		free(nwNode);
		return (NULL);
	}
	nwNode->str = strdup(str);
	while (str[length] != '\0')
	{
		length++;
	}
	nwNode->len = length;
	if (*head != NULL)
		nwNode->next = *head;
	if (*head == NULL)
		nwNode->next = NULL;
	*head = nwNode;
	return (*head);
}

