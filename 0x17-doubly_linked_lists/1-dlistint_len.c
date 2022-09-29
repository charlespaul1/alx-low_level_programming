#include "lists.h"

/**
 * dlistint_len - counts all the elements in a dlistint_t
 * @h: pointer to the head of a linked list
 * Return: number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL i++)
		h = h->next;
	return (i);
}
