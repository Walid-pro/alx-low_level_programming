#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chr;

	for (chr = 'z'; chr <= 'z'; chr--)
	{
		putchar(chr);
		if (chr == 'a')
		{
			putchar('\n');
		}
	}
	return (0);
}
