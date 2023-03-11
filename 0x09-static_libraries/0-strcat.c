#include "main.h"

/**
 * _strcat - function to concatenate two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: pointer to the dest string
 */
char *_strcat(char *dest, char *src)
{
	int delen = 0, i;

	while (dest[delen])
	{
		delen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[delen] = src[i];
		delen++;
	}
	dest[delen] = '\0';
	return (dest);
}
