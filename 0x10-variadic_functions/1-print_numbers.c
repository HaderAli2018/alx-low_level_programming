#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 * print_numbers -  prints numbers
 * @separator: char paramter
 * @n: int paramter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;

va_list countptr;
va_start(countptr, n);
if (separator != NULL)
{
for (i = 0; i < n; i++)
{
if (i == n - 1)
printf("%d", va_arg(countptr, int));
else
printf("%d%s", va_arg(countptr, int), separator);
}
}
else
for (i = 0; i < n; i++)
{
printf("%d", va_arg(countptr, int));
}
va_end(countptr);
printf("\n");
}
