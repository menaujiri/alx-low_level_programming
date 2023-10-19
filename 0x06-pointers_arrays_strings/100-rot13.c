#include "main.h"
#include <stdio.h>

/**
 * rot13 - main function
 *
 * @s: String poiner
 *
 * Return: String function
 */

char *rot13(char *s)
{
	int y, r;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (y = 0; s[y] != '\0'; y++)
	{
	for (r = 0; r < 52; r++)
	{
	if (s[y] == data1[r])
	{
	s[y] = datarot[r];
	break;
	}
	}
	}
	return (s);
}
