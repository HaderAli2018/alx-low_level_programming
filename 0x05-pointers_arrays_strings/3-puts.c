#include "main.h"
#include<stdio.h>
/**
 * _puts - prints a string, followed by a new line,
 * @str: character paramter
 */
void _puts(char *str)
{
	*str = "hello pointer program";
	puts(str);
}
