#include "main.h"

/**
 * _strncat - Function that concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: amount of bytes used frm src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int delen = 0, j = 0;

	while (dest[delen])
	{
		delen++
	}

	while (j < n && src[j])
	{
		dest[delen] = src[i];
		delen++;
		j++;
	}
	dest[delen + n + 1] = '\0';
}
