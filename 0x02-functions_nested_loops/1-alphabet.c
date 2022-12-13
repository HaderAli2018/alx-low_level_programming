#include "main.h"
/**
*print_alphabet  - Print alphabet in lower case
*Return: 0 if success
*/
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
