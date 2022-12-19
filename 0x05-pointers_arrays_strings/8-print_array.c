#include "main.h"
#include<string.h>
#include<stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: array of integer paramter
 * @n: integer paramter
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i <= n; i++)
{
printf("the n number of array %d\n", a[i]);
}
}
