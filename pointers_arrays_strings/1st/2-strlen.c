#include"main.h"
#include<stdio.h>
/**
 * _strlen - returns length of string
 * @s: variable given
 * Return: length of string
 */
int _strlen(char *s)
{
	int j;

	for (j = 0; *s != '\0'; s++)
		j++;
	return (j);
}
