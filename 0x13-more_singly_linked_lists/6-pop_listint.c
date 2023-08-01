#include "lists.h"

/**
 * pop_listint - Entry point
 *
 * Description: deletes the head node of a listint_t linked list
 *
 * @head: pointer to the first node
 *
 * Return: head's node's data (n)
*/

int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *temp, *next;

	if (*head == NULL)
		return (0);

	temp = *head;
	next = temp->next;
	first_node = temp->n;

	free(temp);

	*head = next;

	return (first_node);
}
