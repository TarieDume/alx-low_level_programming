#include "lists.h"

/**
 *get_nodeint - function that returns the nth node of a linked list.
 *@head: head of list.
 *Return: node data
 */

int pop_listint(listint_t **head)
{
	int node;
	listint_t *temp;
	
	if (!head || !*head)
		return (0);

	node = (*head)->n;
	temp = (*head)->next;

	free (*head);
	*head = temp;

	return (node);
}
