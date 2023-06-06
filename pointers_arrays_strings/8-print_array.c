#include"main.h"
#include <stdio.h>
/**
  * print_array - prints eleemts of an array
  * @a: array variable
  * @n: # variable
  * Return: void
  */
void print_array(int *a, int n)
{
	int j = 0;

	if (n > 0)
	{
		printf("%d", a[j]);
		j++;
		n--;
	}
	for (; n > 0; n--)
	{
		printf(", %d", a[j]);
		j++;
	}
	printf("\n");
}
