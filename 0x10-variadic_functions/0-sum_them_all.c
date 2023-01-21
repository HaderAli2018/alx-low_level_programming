#include "variadic_functions.h"
#include<stdarg.h>
#include"_putchar.c"
/**
 *  sum_them_all - sum of all its parameters.
 *  @n: int paramter
 *  Return:sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;

va_list ptr;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
sum += va_arg(ptr, int);
}
va_end(ptr);
return (sum);
}
