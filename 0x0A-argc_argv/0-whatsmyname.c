#include<stdio.h>
/**
 * main - main funcrtion
 * @argc : int paramter
 * @argv : char paramter
 *Return : 0 if success
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("the name of program is %s\n", argv[i]);
}
return (0);
}
