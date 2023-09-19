#include "main.h"
/**
 * print_array - function that prints elements of array of integers
 * @a: array
 * @n: num of elements
 * Return: a and n
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < (n - 1) ; x++)
	{
		printf("%d, ", a[x]);
	}
	if (x == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
