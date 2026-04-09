#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list)
    {
        f(begin_list->data);
        begin_list = begin_list->next;
    }
}

/*
1-Iterate on begin_list
2-on each iteration execute f function on begin_list->data
3-on each iteration move to the next node begin_list -> next
*/