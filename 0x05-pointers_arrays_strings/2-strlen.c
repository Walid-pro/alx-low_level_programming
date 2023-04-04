#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string parameter
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;
	int counter;

	counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}
