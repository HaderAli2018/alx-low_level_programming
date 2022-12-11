#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int num1, num2;
num1 = 48;

while (num1 < 58)
{
if (num1 != num2)
{
num2 = num1 + 1;

while (num2 < 58)
{
putchar(num1);
putchar(num2);
if (num1 != 56 && num2 != 57)
{
putchar(' ');
putchar(',');
}
num2++;
}
}
num1++;
}
putchar('\n');
return (0);
}
