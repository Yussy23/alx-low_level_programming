#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a list_t linked list
 * @h: singly linked list to print
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->i, h->str);
		else
			printf("[0] (nil)\n");
		i++;
		h = h->next;
	}
	return (i);
}
