#include"main.h"
/**
 * print_diagonal - prototype that draws diagonal line
 * @n: variable given
 * Return: void
 */
void print_diagonal(int n)
{
	int s, l;

	if (n > 0)
	{
		for (s = 0; s < n; s++)
		{
		for (l = 0; l < s; l++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
		}
	}
	else
		putchar('\n');
}
