#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check if is digi
 * Return: 1 if c is digit
 * @c: integer paramter
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
