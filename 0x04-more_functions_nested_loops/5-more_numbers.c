#include "main.h"
/**
 * more_numbers - print numbers
 */
void more_numbers(void)
{
	char c;
	int i;

	for (i = 0; i <= 14; i++)
	{
	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	}
}
