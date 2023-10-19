#include "main.h"

/**
  * reverse_array - The main faunction
  *
  * @a: Function parameter
  *
  * @n: Function parameter
  *
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int w, x;

	for (w = 0; w < n--; w++)
	{
	x = a[w];
	a[w] = a[n];
	a[n] = x;
	}
}
