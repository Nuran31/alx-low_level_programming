#include "main.h"
/**
 * *_strcpy - function that copies the string pointed
 * @dest: input
 * @src: input
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int m = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for (m = 0 ; m < x ; m++)
	{
		dest[m] = src[m];
	}
	dest[x] = '\0';
	return (dest);
}
