#include "lists.h"

/**
 * *add_nodeint_end - Entry point
 *
 * Description: adds a new node at the beginning of a listint_t list.
 *
 * @head: pointer to the first node
 *
 * @n: data to be added to list
 *
 * Return: Pointer to new node, else NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	tmp = *head;

	if (tmp == NULL)
		*head = new_node;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = new_node;
	}
	return (*head);
}
