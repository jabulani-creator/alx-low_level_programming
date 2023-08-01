#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 *
 * Description: returns the nth node of a listint_t linked list.
 *
 * @head: pointer to the first node
 *
 * @index: index of node to be returned
 *
 * Return: nth node of listint
*/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
