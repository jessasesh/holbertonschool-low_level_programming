#include <stdio.h>
/**
 * main- entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j);
	}

	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}
