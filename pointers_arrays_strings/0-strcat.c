#include"main.h"
#include<stdio.h>
/**
 * _strcat - links two strings together
 * @dest:char
 * @src:char
 * Return:dest
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
