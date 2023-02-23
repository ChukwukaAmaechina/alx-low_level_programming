#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: number of times to print diagonal line
 */
void print_diagonal(int n)
{
	int x;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
