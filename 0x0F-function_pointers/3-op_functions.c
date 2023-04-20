#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - returns sum of a and b
  * @a: first int
  * @b: second int
  *
  * Return: nothing
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - difference of a and b
  * @a: first int
  * @b: second int
  *
  * Return: nothing
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiple a and b
  * @a: first int
  * @b: second int
  *
  * Return:nothing
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divide a and b
  * @a: first int
  * @b: second int
  *
  * Return: nothing
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - modula
  * @a: first int
  * @b: second int
  *
  * Return: nothing
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
