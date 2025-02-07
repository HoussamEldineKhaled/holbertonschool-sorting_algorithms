#include "sort.h"


/**
 * insertion_sort_list - insertion sort
 * @list: unsorted list
*/

void insertion_sort_list(listint_t **list)
{
listint_t *current, *temp, *prev;
if (list == NULL || *list == NULL || (*list)->next == NULL)
{
return;
}
current = (*list)->next;
while (current)
{
temp = current;
prev = current->prev;
while (prev && prev->n > temp->n)
{
if (temp->next)
{
temp->next->prev = prev;
}
prev->next = temp->next;
temp->prev = prev->prev;
temp->next = prev;
if (prev->prev)
{
prev->prev->next = temp;
}
prev->prev = temp;
if (temp->prev == NULL)
{
*list = temp;
}
print_list(*list);
prev = temp->prev;
}
current = current->next;
}
}
