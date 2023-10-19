#include "main.h"
#include <stdio.h>
/**
  *leet - main function
  *
  * @n: Function parameter
  *
  *Return: value of n
 */

char *leet(char *n)
{
	int j, r;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (j = 0; n[j] != '\0'; j++)
	{
	for (r = 0; r < 10; r++)
	{
	if (n[j] == s1[r])
	{
	n[j] = s2[r];
	}
	}
	}
	return (n);
}
