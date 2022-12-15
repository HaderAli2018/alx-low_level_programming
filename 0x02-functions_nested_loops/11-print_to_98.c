#include "main.h"
/**
 * print_to_98 - print all natural number
 * @n: number paramter
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i >= 10 || i <= 98)
		{
			if (i < 0)
			{
			n = n + 1;
			}
		_putchar('0' + i / 10);
		_putchar('0' + i % 10);
		}
		else
		{
			if (i < 0)
			{
			i = i + 1;
			}
		_putchar('0' + i);
		}
	if (i != 98)
	{
	_putchar(',');
	}
	_putchar(' ');
	}
}
