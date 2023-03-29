#include "main.h"
#include <stdio.h>

/**
 * times_table - function that prints the nine times table, starting with zero.
 * Return: Always zero.
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == 0)
			{
				if (j == 0)
				{
					printf("%d,", 0);
				}
				else if (j > 0 && j != 9)
				{
					printf("  %d,", 0);
				}
				else
				{
					printf("  %d", 0);
				}
			}
			else if (i == 1)
			{
				if (j == 0)
				{
					printf("%d,", j);
				}
				else if (j > 0 && j != 9)
				{
					printf("  %d,", j);
				}
				else
				{
					printf("  %d", j);
				}
			}
			else
			{
				if (j == 0)
				{
					printf("%d,", 0);
				}
				else if (j > 0 && j != 9)
				{
					if(i * j >= 10)
					{
						printf(" %d,", i * j);
					}
					else
					{
						printf("  %d,", i * j);
					}
				}
				else
				{
					printf(" %d", i * j);
				}
			}
		}
		printf("\n");
	}
}
