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
	return (lastdigit);
}
