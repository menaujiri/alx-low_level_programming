#include "main.h"

/**
  * _strncpy - main function of the code
  *
  * @src: Function parameter
  *
  * @dest: Function parameter
  *
  * @n: Function parameter
  *
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int y = 0;

	while (y < n && src[y] != '\0')
	{
	dest[y] = src[y];
	y++;
	}
	while  (y < n)
	{
	dest[y] = '\0';
	y++;
	}
	return (dest);
	}
