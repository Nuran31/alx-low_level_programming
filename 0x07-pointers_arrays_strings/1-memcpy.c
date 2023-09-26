#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: input
 * @src: input
 * @n: input
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int y;
	int x = n;

	for (y = 0; y < x; y++)
	{
		dest[y] = src[y];
		n--;
	}
	return (dest);
}
