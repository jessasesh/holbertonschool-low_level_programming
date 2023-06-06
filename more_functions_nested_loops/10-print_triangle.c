#include"main.h"
/**
 * print_triangle - prototype that prints triangle
 * @size: variable given
 * Return: void
 */
void print_triangle(int size)
{
	int j, d;

	if (size > 0)
	{
		j = 0;
		while (j < size)
		{
			d = size - 1;
			while (d > j)
			{
				putchar(' ');
				d--;
			}
			d = 0;
			while (d < j + 1)
			{
				putchar('#');
				d++;
			}
			putchar('\n');
			j++;
		}
	}
	else
		putchar('\n');
}
