#include "main.h"
/**
 * _strlen - The function name
 * @s: The function parameter
 * Return: lenght of strlen
 */

int _strlen(char *s)
{
	int z;
	int count = 0;

	for (z = 0; s[z] != '\0'; z++)
		count++;
	return (count);
}
