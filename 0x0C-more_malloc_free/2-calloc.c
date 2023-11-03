#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - to allocate memory for an array using calloc
 * @nmemb: number of array numbers
 * @size: the size of array
 * Return: To point to the newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
