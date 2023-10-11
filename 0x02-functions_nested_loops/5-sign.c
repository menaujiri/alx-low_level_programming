#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 * Return: 1 if numb is positive, -1 if numb is negative, and 0 if numb is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('_');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
