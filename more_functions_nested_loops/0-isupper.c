#include "main.h"
#include <unistd.h>
/**
 *int _isupper(int c) - prototype that checks for
 *uppercase character
 *@c: variable
 *Return: 1 for uppercase c, otherwise return 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
