#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer paramter
 * @b: integer paramter
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
