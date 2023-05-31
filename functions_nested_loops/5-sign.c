#include "main.h"

/**
 * print_sign - CHECK YOUR PROTOTYPE
 * @n: CHECK YOUR VAR
 * Return: CHECK YOUR PROTOTYPE
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		return (3);
	}
}
