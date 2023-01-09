#include<stdio.h>
/**
 * main - main function
 *@argc: int paramter
 */
int main(int argc, char *argv[])
{
int i ;

for (i = 0; i < argc; i++)
{
printf("argv[%2d]: %s\n", i, argv[i]);
}
return (0);
}
