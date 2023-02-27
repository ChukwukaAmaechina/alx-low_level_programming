#include "main.h"

/**
 * _puts - function to print a string
 *
 * @str: string to be printed
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
