#include "lists.h"

/**
 * dlistint_len - counts all the elements in a dlistint_t
 * @h: pointer to the head of a linked list
 * Return: number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
