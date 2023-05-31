#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 - entry point
 */
void print_alphabet_x10(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int j;
	int d = 1;

	while (d <= 10)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(c[j]);
		}
	_putchar('\n');
	d++;
	}
}
