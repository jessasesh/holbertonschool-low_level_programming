#include"main.h"
/**
 * print_most_numbers - prototype that prints #s from 0-9 except 2&4
 * Return: void
 */
void print_most_numbers(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		if ((j = 2) && (j = 4))
			putchar(j);
	}
	putchar('\n');

}
