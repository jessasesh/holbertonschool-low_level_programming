#include "main.h"
#include <unistd.h>
/**
 *_isdigit - prototype that checks for a digit
 *@c: variable
 *Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}
