#include "lists.h"

/**
 * free_list - Entry point
 *
 * Description: free a linked list.
 *
 * @head: pointer to the first node
 *
 * Return: void
*/


void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
