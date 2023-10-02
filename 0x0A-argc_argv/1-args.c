#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc--);
	return (0);
}
