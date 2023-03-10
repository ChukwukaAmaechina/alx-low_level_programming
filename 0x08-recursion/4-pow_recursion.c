#include "main.h"

/**
 * _pow_recursion - function to return powers of numbers
 * @x: integer value
 * @y: integer value
 *
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
