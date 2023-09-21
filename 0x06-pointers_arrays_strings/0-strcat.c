#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: input
 * @src: input
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int o = 0;
	int x = 0;

	while (dest[o] != '\0')
	{
		o++;
	}
	while (src[x] != '\0')
	{
		dest[o] = src[x];
		o++;
		x++;
	}
	dest[o] = '\0';
	return (dest);
}
