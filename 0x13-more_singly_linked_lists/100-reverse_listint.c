#include "lists.h"

/**
 * reverse_listint - Reverse a listint_t linked list
 * @head: A pointer to the address of
 *        the head of the list_t list
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *start = NULL, *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = start;
		start = *head;
		*head = next;
	}
	*head = start;
	return (*head);
}
