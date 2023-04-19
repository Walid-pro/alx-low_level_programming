#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: given string to be printed
 * Return: string
 */
void print_rev(char *s)
{
	int i, j;
	int counter = 0;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		counter++;
	}
	for (j = counter; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');

}

