#include "main.h"
#include <stdio.h>
/**
 * rot13 - function that encodes a string
 * @i: input
 * Return: i
 */
char *rot13(char *i)
{
	int x, y;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char data2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; i[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (i[x] == data1[y])
			{
				i[x] = data2[y];
				break;
			}
		}
	}
	return (i);
}
