#include "main.h"
/**
 * _puts - The function name
 * @str: The function parameter
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
