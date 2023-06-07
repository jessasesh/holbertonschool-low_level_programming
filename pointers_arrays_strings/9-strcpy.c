#include"main.h"
#include<stdio.h>
/**
 * _strcpy - copies string
 * @dest:char given
 * @src:char given
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;

i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
dest[i] = '\0';
return (dest);
}
