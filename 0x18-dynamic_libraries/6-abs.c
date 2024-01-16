#include "main.h"

/**
 * _abs - Computes the absolute of a number
 * @n: The number to compute the absolute
 * Return: Absolute value of the number
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;


		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
