#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - returns the sum of @a and @b
  * @a: int
  * @b: int
  * Return: sum
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - return the difference of @a and @b
  * @a: int
  * @b: int
  * Return: subtraction
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - returns the product of @a and @b
  * @a: int
  * @b: int
  * Return: Multiplication
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - returns the results of the division of @a and @b
  * @a: int
  * @b: int
  * Return: division
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
  * op_mod - returns the remainder of the division of @a and @b
  * @a: int
  * @b: int
  * Return: remainder
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
