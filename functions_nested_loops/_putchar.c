#include "main.h"
#include <unistd.h>

/**
 * defining _putchar
 * 
 * Return: 1 Success
 * Error, -1 returned
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
