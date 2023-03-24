#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @num: the integer which we will compute its absolute value
 * Return: 0.
 */
int _abs(int num)
{
	int abs_num;

	if (num == 0 || num > 0)
	{
		abs_num = num;
		return (abs_num);
	}
	else
	{
		abs_num = num * -1;
		return (abs_num);
	}
}
