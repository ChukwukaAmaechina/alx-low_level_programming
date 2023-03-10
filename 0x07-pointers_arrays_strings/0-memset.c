#include "main.h"

/**
 * _memset - Function to fill memory with a constant byte
 * @s: Memory area to fill
 * @b: constant byte to fill
 * @n: bytes of memory area to fill
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
