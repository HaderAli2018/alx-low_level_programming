#include <stdio.h>
/**
*main - entry point
*
*Return:0 if Success
*/
int main(void)
{
int i, j, k , l;
for (i = 0 ; i < 8 ; i++)
{
for (j = i; j <8; j++)
{
for (k = j; k < 8; k++)
{
for (l =1 ; l <= 9; l++)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(l + '0');
putchar(',');
putchar(' ');
}
l = 0;
}
}
}
putchar('\n');
return (0);
}
