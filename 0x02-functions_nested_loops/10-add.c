#include "main.h"
/**
 *add -  function that adds two integers
 *@x: integer paramter1
 *@y: integer paramter2
 *Return: value of add two integer
 */
int add(int x, int y)
{
	int res;

	res = x + y;
	if (x == 0 && y == 0)
	{
	return (0);
	}
	_putchar('0' + (res / 10));
	_putchar('0' + (res % 10));
	return (res);
}
