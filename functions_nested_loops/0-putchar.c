
#include "main.h"
#include <unistd.h>
/**
 * main- print "_putchar"
 *
 * Return: need number
 */
int main(void)
{
	char c[] = "_putchar";
	int j;

	for (j = 0; j < 8; j++)
	{
		_putchar(c[j]);
	}
	_putchar('\n');

	return (0);
}
