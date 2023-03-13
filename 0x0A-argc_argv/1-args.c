#include "main.h"
#include <stdio.h>
/**
 * main - function that prints the number of arguments passed
 * @argc: argument counter
 * @argv: arguments passed
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
