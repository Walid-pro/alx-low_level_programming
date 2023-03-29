#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 * Return: 0.
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (j = 0; j < 24; j++)
	{
		for (i = 0; i < 60; i++)
		{
			if (j < 10)
			{
				printf("0%d:", j);
			}
			else
			{
				printf("%d:", j);
			}

			if (i < 10)
			{
				printf("0%d\n", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
}
