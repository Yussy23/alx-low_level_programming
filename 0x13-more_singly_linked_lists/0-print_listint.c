#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Function that prints all elements of a list_t list
 * @h: A pointer to the head of the list_t list
 *
 * Return: Number of nodes in the list_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next, i++;
	}
	return (i);
}
