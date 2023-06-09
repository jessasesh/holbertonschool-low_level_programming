#include"main.h"
#include "2-strlen.c"

/**
 * puts_half - function
 * @str: input
 */

void puts_half(char *str)
{
	int x;
	int length = _strlen(str);

	for (x = 0; x < length; x++)
	{
		if (length % 2 != 0 && x < ((length / 2) + 1))
		{
			continue;
		}
		else if (length % 2 == 0 && x < (length / 2))
		{
			continue;
		}
		else
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
