#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: input
 * Return: 0
 */
void print_rev(char *s)
{
	int toul = 0;
	int m;

	while (*s != '\0')
	{
		toul++;
		s++;
	}
	s--;
	for (m = toul ; m > 0 ; m--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
