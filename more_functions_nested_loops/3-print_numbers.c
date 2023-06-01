#include "main.h"
/**
 * print_numbers - prototype prints numbers 0-9 with new line
 *
 * Return: 0
 */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
}
