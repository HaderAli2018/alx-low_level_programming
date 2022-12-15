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
	if (x == 0)
	return (y);
	if (y == 0)
	return (x);
	if (x > 0 && y > 0)
	return (res);
}
