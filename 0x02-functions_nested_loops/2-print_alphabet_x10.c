#include "main.h"

/**
 * print_alphabet_x10 - multiply the alphabet by 10
 *
 * Return: Accept 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, p;

	p = 0;

	while (p < 10)
	{
		int c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		p++;
		_putchar ('\n');
	}
}
