#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds ints
 * @a: int 1
 * @b: int 2
 * Return: result
 */

int op_add(int a, int b)
{
	int result;

	result = (a + b);
	return (result);
}

/**
 * op_sub - subtracts ints
 * @a: int 1
 * @b: int 2
 * Return: result
 */

int op_sub(int a, int b)
{
	int result;

	result = (a - b);
	return (result);
}

/**
 * op_mul - multiplies ints
 * @a: int 1
 * @b: int 2
 * Return: result
 */

int op_mul(int a, int b)
{
	int result;

	result = (a * b);
	return (result);
}

/**
 * op_div - divides ints
 * @a: int 1
 * @b: int 2
 * Return: result
 */

int op_div(int a, int b)
{
	int result;

	result = (a / b);
	return (result);
}

/**
 * op_mod - modelo's ints
 * @a: int 1
 * @b: int 2
 * Return: result
 */

int op_mod(int a, int b)
{
	int result;

	result = (a % b);
	return (result);
}
