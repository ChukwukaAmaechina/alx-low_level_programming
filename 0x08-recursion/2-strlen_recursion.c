#include "main.h"

/**
 * _strlen_recursion - function to calculate the length of a string
 * @s: string characters to count
 *
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
