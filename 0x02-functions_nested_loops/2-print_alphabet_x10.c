#include "main.h"

/**
 * print_alphabet_x10 - multiply the alphabet by 10
 *
 * Return: Accept 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		int c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}
	_putchar (0);
	return (0);
}
