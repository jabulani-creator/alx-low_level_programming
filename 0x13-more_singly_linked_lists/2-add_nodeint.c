#include "lists.h"

/**
 * *add_nodeint - Entry point
 *
 * Description: adds a new node at the beginning of a listint_t list.
 *
 * @head: pointer to the first node
 *
 * @n: data to be added to list
 *
 * Return: Pointer to new node, else NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->n = n;

	*head = new_node;

	return (*head);
}
