#include "main.h"

/**
 * _memcpy - Function to copy bytes of memory from a source to destination
 * @dest: destination
 * @src: source
 * @n: bytes of memory
 *
 * Return: memory to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
