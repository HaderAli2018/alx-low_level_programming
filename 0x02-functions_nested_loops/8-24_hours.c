#include "main.h"
/**
 *jack_bauer - prints every minute of the day
 *Return: 0 if Success
 */
void jack_bauer(void)
{
	int h, m, i;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (m <= 9)
				_putchar(h + '0' + ':' + m + '0');
		}

	}
}
