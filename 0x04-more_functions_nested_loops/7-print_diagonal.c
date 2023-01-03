#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n:number of times the character
 */
void print_diagonal(int n)
{
	int i;
	char c = '/';

	if ( n > 0)
	{
	for (i = 0; i < n; i++)
	{
	_putchar("%*c\n");
	}
	}
	else
	{
	_putchar('\n');
	}
}
