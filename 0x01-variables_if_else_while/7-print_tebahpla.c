#include <stdio.h>
/**
*main - Entry point
*Return: 0 Always if Success
*/
int main(void)
{
	 int i;
	 char ascii;

for (i = 122; i >= 97; i--)
{
ascii = (char)i;
putchar(ascii);
}
putchar('\n');
return (0);
}
