#include <stdio.h>
/**
*main - Entry point
*
*Return: 0 If Success
*/
int main(void)
{
	int i;
	char ascii, x;

	for (i = 48; i < 58; i++)
	{
		ascii = (char)i;
		putchar(ascii);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
