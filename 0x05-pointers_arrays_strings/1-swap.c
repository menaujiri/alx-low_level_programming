#include "main.h"
/**
 * swap_int - The name of the function
 * @a: The first parameter
 * @b: The second parameter
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
