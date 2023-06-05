#include"main.h"
/**
 * print_line - prototype that draws a straight line
 * @n: variable given
 * Return: void
 */
void print_line(int n)

{
	int j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			putchar('_');
		}
	putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}
