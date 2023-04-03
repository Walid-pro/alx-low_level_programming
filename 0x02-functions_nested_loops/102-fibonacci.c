#include "stdio.h"

/**
 * main - fibanacci sequence function
 *
 * Return: ALways 0.
 */
int main(void)
{
	int i;
	long int num1 = 1;
	long int num2 = 2;
	long int num3 = num1 + num2;

	printf("%lu, %lu, ", num1, num2);
	for (i = 3; i <= 50; i++)
	{
		if (i == 50)
		{
			printf("%lu\n", num3);
		}
		else
		{
			printf("%lu, ", num3);
		}
		num1 = num2;
		num2 = num3;
		num3 = (num1 + num2);
	}
	return (0);
}
