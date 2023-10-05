#include "main.h"
/**
 * _strncat - function to concatenates two strings.
 * @dest: input
 * @src: input
 * @n: input
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int o = 0;
	int x = 0;

	while (dest[o] != '\0')
	{
		o++;
	}
	while (x < n && src[x] != '\0')
	{
		dest[o] = src[x];
		o++;
		x++;
	}
	dest[o] = '\0';
	return (dest);
}
