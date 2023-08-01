#include "lists.h"

/**
 * listint_len - Entry point
 *
 * Description: returns the number of elements in a linked listint_t list.
 *
 * @h: pointer to the first node
 *
 * Return: Number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
