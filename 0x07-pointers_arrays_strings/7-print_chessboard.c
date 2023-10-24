#include "main.h"

/**
  * print_chessboard - the main function
  *
  * @a: the function parameter declared
  *
  * Return: Always 0.
  */
void print_chessboard(char (*a)[8])
{
	int p;
	int f;

	for (p = 0; p < 8; p++)
	{
	for (f = 0; f < 8; f++)
	_putchar(a[p][f]);
	_putchar('\n');
		}
		}
