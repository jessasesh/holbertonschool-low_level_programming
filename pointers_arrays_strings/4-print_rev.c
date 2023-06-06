#include"main.h"
/**
 * print_rev - prints string in reverse
 * @s: variable given
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int j;

	j = 0;
	while (*(s + j) != 0)
	{
		j++;
	}
	j -= 1;
	while (j >= 0)
	{
		_putchar(*(s + j));
		j--;
	}
	_putchar('\n');
}
