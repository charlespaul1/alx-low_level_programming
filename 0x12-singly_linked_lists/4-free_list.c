#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the memory that is occupied by a list
 * @head: pointer to the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
