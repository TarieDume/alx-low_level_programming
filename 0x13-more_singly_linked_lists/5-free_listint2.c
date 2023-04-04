#include "lists.h"

/**
 *free_listint2 -  function that frees a list
 *@head: head of lists.
 *Return 0
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
