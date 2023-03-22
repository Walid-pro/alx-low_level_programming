#include "main.h"

/**
 * print_alphabet - print alphabets function
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
