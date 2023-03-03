#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to upper letter
 * @str: string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index]; index++)
	{
		if (str[index] >= 97 && str[index] <= 122)
			str[index] -= 32;
	}

	return (str);
}
