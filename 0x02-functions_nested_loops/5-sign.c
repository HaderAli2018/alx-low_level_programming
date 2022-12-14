#include "main.h"
/**
 *print_sign -  prints the sign of a number
 *
 *@n: is the integer number
 * Return:  1 if is greater than zero and 0 is zero and -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	if (n == 0)
		return (0);
	else
		return (-1);
}
