#include "main.h"
/**
 * _puts - function that prints a string
 * @str: input
 * Return: str
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	putchar(*str++);
	}
	putchar('\n');
}
