#include "main.h"

/**
 * print_last_digit - function that prints the last of a number
 * @num: the input number
 * Return: 0.
 */
int print_last_digit(int num)
{
	int lastdigit;

	lastdigit = num % 10;
	if (lastdigit < 0)
	{
		lastdigit = -lastdigit;
	}
	_putchar('0' + lastdigit);
	return (lastdigit);
}
