#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *_islower - checks for c char lowercase
 *@c: is char to be checked
 * Return: 1 if success and 0 if failed
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
