#include "main.h"

/**
  * _strpbrk - main function of the prototype
  *
  * @s: function parameter
  *
  * @accept: Fuunction parameter
  *
  * Return: Always 0.
  */

char *_strpbrk(char *s, char *accept)
{
	int p, j;

	for (p = 0; s[p] != '\0'; p++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[p] == accept[j])
	return (s + p);
	}
	}
	return (0);
}
