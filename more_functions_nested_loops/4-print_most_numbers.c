#include"main.h"
/**
 * print_most_numbers - prototype that prints #s from 0-9 except 2&4
 * Return: void
 */
void print_most_numbers(void)
{
	int j;

	j = 0;

	while (j <= 9)
	{
		if (j != 2 && j != 4)
			putchar(j + '0');
		j++;
	}
	putchar('\n');

}
