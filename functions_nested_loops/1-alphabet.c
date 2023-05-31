#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - entry point thank you Sarah
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int j;

	for (j = 0; j < 26; j++)
	{
		_putchar(c[j]);
	}
	_putchar('\n');
}
