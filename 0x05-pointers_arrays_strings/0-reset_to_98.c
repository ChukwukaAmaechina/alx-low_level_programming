#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - function to reset value
 *
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	n = 98;
}

/**
 * main - parameter passed 
 *
 * Return: Always 0
 */

int main(void)
{
	int m;

	m = 4;
	reset_to_98(m);
	return (0);
}
