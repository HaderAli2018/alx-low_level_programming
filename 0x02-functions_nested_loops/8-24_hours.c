#include "main.h"
/**
 *jack_bauer - prints every minute of the day
 *Return: 0 if Success
 */
void jack_bauer(void)
{
	int h, m, i = 0;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(i h : i m);
		}

	}
}
