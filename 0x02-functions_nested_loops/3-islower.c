#include "main.h"
#include <stdio.h>
/**
*_islower -checks for lowercase
*Return: 1 if success and 0 if failed
*/
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
