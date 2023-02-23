#include "main.h"

/**
 * _isdigit - Function to check if c is between 0 -9
 * @c: Integer that checks the validity of the function
 *
 * Return: 1 if success otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c >= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
