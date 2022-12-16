#include "main.h"
/**
 * print_line - print line
 * @n: number of times
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar('_');
	}
_putchar('\n');
}
