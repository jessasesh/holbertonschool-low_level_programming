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

	for (j = 0; j <= 19; j++)
	{
		for (d = 0; d <= 10; d++)
		{
		putchar(c[j]);
		}
	}
	putchar('\n');
}
