#include "lists.h"

/**
 * print_listint_safe - Reverses a listint_t list
 * @head: A pointer to the address of
 *        the head of the list_t list
 *
 * Return: A pointer to the first node of the reversed list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *temp, *node;

	node = head;
	while (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		temp = node;
		node = node->next;
		i++;
		if (temp <= node)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
	}
	return (i);
}
