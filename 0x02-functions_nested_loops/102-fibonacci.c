#include "stdio.h"

/**
 * main - fibanacci sequence function
 *
 * Return: ALways 0.
 */
int main(void)
{
	int i;
	int num1 = 1;
	int num2 = 2;
	int num3 = num1 + num2;

	for (i = 0; i <= 50; i++)
	{
		if (i < 1)
		{
			printf("%d, %d, ", num1, num2);
		}
		else
		{
			printf("%d, ", num3);
			num1 = num2;
			num2 = num3;
			num3 = num1 + num2;
		}
	}
	printf("\n");
	return (0);
}
