#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: input
 * Return: 0
 */
void rev_string(char *s)
{
	char aks = s[0];
	int adad = 0;
	int a = 0;

	while (s[adad] != '\0')
	{
		adad++;
	}
	for (a = 0 ; a < adad ; a++)
	{
		adad--;
		aks = s[a];
		s[a] = s[addad];
		s[adad] = aks;
	}
}
