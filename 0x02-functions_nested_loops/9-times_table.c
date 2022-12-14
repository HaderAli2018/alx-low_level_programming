#include "main.h"
/**
 * times_table - prints 9 times of time table
 */
void times_table(void)
{
	int i, j, num = 1, res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = num * j;
			if (res <= 9)
			{
			_putchar('0' + res);
			}
			else
			{
			_putchar('0' + res / 10);
			_putchar('0' + res % 10);
			}
		_putchar('\t');
		}
		_putchar('\n');
		num++;
	}
}
