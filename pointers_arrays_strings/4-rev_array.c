#include"main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a:array
 * @n: number of elements in array
 * Return:void
 */
void reverse_array(int *a, int n)
{
int j, d;

for (j = 0; (j < (n - 1) / 2); j++)
	{
	d = a[j];
	a[j] = a[n - 1 - j];
	a[n - 1 - j] = d;
	}
}
