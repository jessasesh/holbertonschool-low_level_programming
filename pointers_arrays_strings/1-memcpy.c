#include"main.h"
/**
 * _memcpy - function
 * @dest: new string
 * @src: old string
 * @n: length to change
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j, d;

	for (j = 0, d = 0; j < d && src[d]; j++, d++)
	{
		dest[j] = src[d];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
