#include"main.h"
#include<string.h>
/**
 *  _puts_recursion - prints a string
 *  @s: char paramter
 */
void _puts_recursion(char *s)
{
char *p;
char c;

p = s;
if (*p != '\0')
c = *p;
_putchar(c);
p++;
_puts_recursion(p);
}
