#include "main.h"

/**
  * _strncat  - the main function
  *
  * @n: Function parameter
  *
  * @src: Function parameter
  *
  * @dest: Function parammeter
  *
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int y, r;

	y = 0;
	r = 0;

	while (dest[y] != '\0')
	{
	y++;
	}
	while (r < n && src[r] != '\0')
	{
	dest[y] = src[r];
	y++;
	r++;
	}
	dest[y] = '\0';
	return (dest);
}
