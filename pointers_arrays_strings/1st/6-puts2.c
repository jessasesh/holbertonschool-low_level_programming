#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - function
 * @str: input
 */

void puts2(char *str)
{
	int x;
	int length = _strlen(str);

	for (x = 0; x < length; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
