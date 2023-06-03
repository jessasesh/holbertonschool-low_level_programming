#include"main.h"
/**
 * more_numbers - prototype that prints 0-14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int j;
	int d;
	char c[] = "01234567891011121314";

	for (d = 0; d <= 9; d++)
	{
		for (j = 0; j <= 19; j++)
		{
		putchar(c[j]);
		}

	putchar('\n');
	}
}
