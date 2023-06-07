#include"main.h"
#include<stdio.h>
/**
 * _atoi - convert string  into an integer
 * @s:string given
 * Return:int d
 */

int _atoi(char *s)
{
int j, a, d, z;

	j = d = 0;
	z = 1;
	while ((s[j] < '0' || s[j] > '9') && (s[j] != '\0'))
	{
		if (s[j] == '-')
			z *= -1;
		j++;
	}
	a = j;
	while ((s[a] >= '0') && (s[a] <= '9'))
	{
		d = (d * 10) + x * ((s[a]) - '0');
		a++;
	}
	return (d);
}
