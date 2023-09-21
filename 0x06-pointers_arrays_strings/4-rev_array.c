#include "main.h"
/**
 * reverse_array - function that reverses the content of an array
 * @a: input
 * @n: input
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int x = 0;
	int t;

	for (x = 0; x < n--; x++)
	{
		t = a[x];
		a[x] = a[n];
		a[n] = t;
	}

}
