#include "main.h"
#include <unistd.h>
/**
 * _islower - DONE
 *
 * @c: DONE
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
