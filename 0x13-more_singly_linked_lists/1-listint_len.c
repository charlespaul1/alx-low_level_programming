#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @s: linked list of type listint_t to travese
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (s)
	{
		num++;
		s = s->next;
	}

	return (num);
}
