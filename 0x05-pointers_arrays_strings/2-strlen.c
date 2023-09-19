#include "main.h"
#include <stdio.h>
/**
 * _strlen - function to return the length of a string
 * @s: string
 * Return: toul
 */
int _strlen(char *s)
{
	int toul = 0;

	while (*s != '\0')
	{
		toul++;
		s++;
	}
	return (toul);
}
