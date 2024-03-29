#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - function that prints all the elements of a list.
 * @h: head of a list.
 * Return: numbers of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
