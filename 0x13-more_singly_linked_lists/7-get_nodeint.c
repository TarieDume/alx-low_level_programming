#include "lists.h"

/**
 * get_nodeint -  function that returns the nth node of a linked list.
 * @head: head of a list.
 * @index: Index of the node.
 * Return: NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
