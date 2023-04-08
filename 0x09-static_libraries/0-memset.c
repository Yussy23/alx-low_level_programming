#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: memory area to be filled
 * @b: The character to fill the memory area with
 * @n: number of bytes to be filled
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
