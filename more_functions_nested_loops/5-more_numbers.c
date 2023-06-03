#include"main.h"
/**
 * more_numbers - prototype that prints 0-14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int j;
	char c[] = "1234567891011121314";

	for (j = 0; j <= 14; j++)
	{
		putchar(c[j]);
	}
	putchar('\n');
}
