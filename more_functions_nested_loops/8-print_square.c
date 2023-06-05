#include"main.h"
/**
 * print_square - prototype that prints square
 * @size: given variable
 * Return: void
 */
void print_square(int size)
{
	int horz, vert;

	if (size > 0)
	{
		for (horz = 0; horz < size; horz++)
		{
			for (vert = 0; vert < size; vert++)
			{
				putchar('#');
			}
		putchar('\n');
		}
	}
	else
		putchar('\n');
}
