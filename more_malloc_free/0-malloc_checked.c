#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: exit
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
	char *string;
	string = malloc(sizeof(char) * b);

	if (string == NULL)
	{
		exit(98);
	}
	return (string);
}
