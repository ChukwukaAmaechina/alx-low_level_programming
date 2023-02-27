#include "main.h"

/**
 * swap_int - function to swap values of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
