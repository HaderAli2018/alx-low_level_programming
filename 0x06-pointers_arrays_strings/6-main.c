#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Return: Always
 */
int main(void)
{
char str[] = "Expectorld.hello world\n";
char *ptr;

ptr = cap_string(str);
printf("%s", ptr);
printf("%s", str);
return (0);
}
