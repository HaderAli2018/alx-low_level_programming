#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string, in reverse
 * @s: character paramter
 */
void print_rev(char *s)
{
	int i, a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	for (i = a - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
