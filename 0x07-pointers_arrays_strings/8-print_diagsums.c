#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - main function
  *
  * @size: function parameter
  *
  * @a: function parameter
  *
  * Return: Always 0.
  */

void print_diagsums(int *a, int size)
{
	int count1;
	int count2;
	int h;

	count1 = 0;
	count2 = 0;

	for (h = 0; h < size; h++)
	{
	count1 = count1 + a[h * size + h];
	}
	for (h = size - 1; h >= 0; h--)
	{
	count2 += a[h * size + (size - h - 1)];
	}
	printf("%d, %d\n", count1, count2);
}
