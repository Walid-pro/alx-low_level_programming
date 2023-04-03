#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: number of times character \ to be printed
 * Return: diagonal line
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < n; i++)
		{
			if (i > 0)
			{
				for (j = 1; j <= i; j++)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
