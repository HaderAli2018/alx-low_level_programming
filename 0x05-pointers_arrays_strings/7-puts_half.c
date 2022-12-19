#include "main.h"
#include<string.h>
/**
 * puts_half -  prints half of a string
 * @str: string paramter
 */
void puts_half(char *str)
{
	int len, i, middle;

	len = strlen(str);
	middle = len / 2;
	if (len % 2 == 0)
	{
	for (i = middle; i < len; i++)
	{
		_putchar(str[i]);
	}
	}
	else
	{
	for (i = middle + 1; i < len; i++)
	{
	_putchar(str[i]);
	}
	}
_putchar('\n');
}
