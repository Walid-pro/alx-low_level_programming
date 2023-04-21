#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: reversed string
 */
void rev_string(char *s)
{
	int i, j, counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		counter++;
	}
	for (j = 0; j < counter; j++)
	{
		char clone = s[j];
		s[j] = s[counter - j -1];
		s[counter - j -1] = clone;
	}
}
