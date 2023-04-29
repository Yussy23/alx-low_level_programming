#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Adds new node t the beginning
 *               of a listint_t list
 * @head: Pointer
 * @n: Integer
 * Return: New head adress
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));


	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
