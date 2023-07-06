#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - prints strings
 * @separator: separates strings
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *string;
	va_list ptr;

	va_start(ptr, n);

	for (x = 0; x < n; x++)
	{
		string = va_arg(ptr, char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (separator != NULL && x < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ptr);
}
