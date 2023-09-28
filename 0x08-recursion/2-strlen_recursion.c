#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: input
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int lon = 0;

	if  (*s)
	{
		lon++;
		lon += _strlen_recursion(s + 1);
	}
	return (lon);
}
