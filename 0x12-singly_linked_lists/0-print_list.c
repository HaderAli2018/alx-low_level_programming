#include<stdio.h>
#include"lists.h"
/**
 *print_list -  prints all the elements of a list_t list
 *@h: struct paramter
 *@Return: all element of list
 */
typedef struct node
{
char *str;
int len;
struct node *next;
} list_t;
size_t print_list(const list_t *h)
{
size_t count;
list_t *current_node = h;
while (current_node != NULL)
{
if (current_node->str == NULL)
{
current_node->len = 0;
current_node->str = "(nill)";
}
printf("[%d] %s", current_node->len, current_node->str);
count++;
current_node = current_node->next;
}
return (count);
}
