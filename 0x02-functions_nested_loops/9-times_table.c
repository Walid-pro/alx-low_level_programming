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
		printf("%d", 0);
		for (j = 1; j < 10; j++)
		{
			if (i == 0)
			{
				printf(",  %d", 0);
			}
			else
			{
				if (i * j >= 10)
				{
					printf(", %d", i * j);
				}
				else
				{
					printf(",  %d", i * j);
				}
			}
		}
		printf("\n");
	}
}
