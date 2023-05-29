#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- this program will assign a random number to variable
 * and then describe the context of the last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int jd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	jd = n % 10;
		if (jd > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, jd);
		}
		else if (n == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, jd);
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, jd);
		}

		return (0);

}
