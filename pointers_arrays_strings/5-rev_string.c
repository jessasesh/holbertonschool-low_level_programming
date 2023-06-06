#include"main.h"
/**
 * rev_string - reverse a string
 * @s:string
 * Return:void
 */
void rev_string(char *s)
{
int j, d;
char a[5];
j = 0;
d = 0;
	while (*(s + j))
	{
		*(a + j) = *(s + j);
		j++;
	}
	j = j - 1;
	while (j >= 0)
	{
		*(s + j) = *(a + d);
		d++;
		j--;
	}
}
