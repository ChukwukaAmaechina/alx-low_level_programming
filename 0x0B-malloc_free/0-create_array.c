#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: The size of the array
 * @c: The char to initialize the array with
 *
 * Return: Pointer to the array, Null if size is 0 or if its fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}