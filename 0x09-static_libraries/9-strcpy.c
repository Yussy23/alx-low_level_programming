#include "main.h"

/**
 *_strcpy - Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * @dest: character type string
 * @src: character type string
 * Return: Pointer to `dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
