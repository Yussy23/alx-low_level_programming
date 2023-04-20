#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: The array
 * @size: The size of array
 * @cmp: A pointer to the comparing function
 * Return: If no element matches or size <= 0 - -1
 *         Otherwise - The index of the first element for which
 *                     the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1)
}
