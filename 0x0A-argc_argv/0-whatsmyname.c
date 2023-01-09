#include<stdio.h>
#include"main.h"
/**
 * main - main funcrtion
 * @argc : int paramter
 * @argv : char paramter
 *Return: 0 if success
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
