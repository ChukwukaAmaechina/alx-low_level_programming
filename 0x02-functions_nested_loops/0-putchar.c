#include <stdio.h>
#include "main.h"
/**
 * main - Print putchar
 *
 * Return: 0 on successs
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
