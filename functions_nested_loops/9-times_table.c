#include "main.h"

/**
 * times_table - DONE
 */
void times_table(void)
{
	int j;
	int d;

	for (j = 0; j <= 9; j++)
	{
		for (d = 0; d <= 9; d++)
		{
			if (d == 0)
			{
				printf("%d", j * d);
			}
			else
			{
				printf(",%3d", j * d);
			}
		}
		printf("\n");
	}
}
