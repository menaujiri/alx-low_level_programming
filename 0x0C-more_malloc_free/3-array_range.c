#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - to create array of integers
 * @min: minimun number of array
 * @max: maximun number of array
 * Return: To new allocated memory
 */

int *array_range(int min, int max)
{
	int size;
	int *output;
	int i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		output[i] = min++;
	return (output);
}
