#include "main.h"
/**
 * times_table - prints 9 times of time table
 */
void times_table(void)
{
	int i, j, num = 1;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(num * j);
			_putchar('\t');
		}
		_putchar('\n');
		num++;
	}
}
