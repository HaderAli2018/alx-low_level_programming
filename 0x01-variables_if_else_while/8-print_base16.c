#include <stdio.h>
/**
*main - Entry point
*
*Return: 0 If Success
*/
int main(void)
{
	int i;
	char ascii;

	for (i = 0 ; i <= 9 ; i++)
	{
		ascii = (char)i
		putchar(ascii);
	}
	putchar('\n');
	return (0);
}
