#include "lists.h"

/**
 * get_nodeint_at_index - Return the nth node
 *                        of a listint_t linked list
 * @head: A pointer to the head of the listint_t list
 * @index: The index of the node
 * Return: If the node does not exist - NULL
 *         Otherwise - the located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int i;

	if (!head)
		return (0);
	for (i = 0; new; i++)
	{
		if (i == index)
			return (new);
		new = new->next;
	}
	return (NULL);
}
