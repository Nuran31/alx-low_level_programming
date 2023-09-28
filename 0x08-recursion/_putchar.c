#include <unistd.h>

/**
 * _putchar write the charare c to stdout
 * @c: the characer to print
 * return: 1 if true, 0 if false
 * on error, -1 is return.
 */
 int _putchar(char c)
{
	return (write(1, &c, 1)):
}

