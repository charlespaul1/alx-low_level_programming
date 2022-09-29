#include "lists.h"

/**
 * print_dlistint - prints all elements of alist
 * @h: pointer to the head node of a linked list
 * Return: number of elements of a dlistint_t list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x;

	if (h == NULL)
		return (0);
	for (x = 0; h != NULL; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
