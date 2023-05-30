#include "main.h"
#include <unistd.h>

/**
 * _putchar - defining prototype
 * @c: variable description
 * Return: 1 Success
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
