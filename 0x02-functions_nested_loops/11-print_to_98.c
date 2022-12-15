#include "main.h"
/**
 * print_to_98 - print all natural number
 * @n: number paramter
 */
void print_to_98(int n)
{
	int i;

	for (i = n; n <= 98; n++)
	{
	_putchar('0' + i);
	_putchar(',');
	_putchar(' ');
	}
}
