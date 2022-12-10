#include <stdio.h>
/**
*main - Entry point
*
*Return: 0 IF succcess
*/
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
		putchar(',');
		if (x != 9)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
