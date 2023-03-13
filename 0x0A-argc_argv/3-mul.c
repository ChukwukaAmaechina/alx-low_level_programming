#include "main.h"
#include <stdio.h>

/**
 * main - function to print the multiplaction of two numbers
 * @argc: argument counter
 * @argv: argument passed
 *
 * Return: error if 1, 0 on success
 */
int main(int argc, char *argv[])
{
	int n1, n2, multi;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	multi = n1 * n2;

	printf("%d\n", multi);

	return (0);
}
