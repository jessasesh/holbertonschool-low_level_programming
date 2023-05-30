#include <stdio.h>
/**
 * main- entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char j;

	for (j = 'z'; j >= 'a'; j--)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}
