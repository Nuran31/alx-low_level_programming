#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: input
 * @src: input
 * @n: input
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int o = 0;

	while (o < n && src[o] != '\0')
	{
		dest[o] = src[o];
		o++;
	}
	while (o < n)
	{
		dest[o] = '\0';
		o++;
	}
	return (dest);
}
