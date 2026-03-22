#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    int i = 0;

    while (begin_list)
    {
        begin_list = begin_list->next;
        i++;
    }

    return (i);
}

/*
0-include ft_list.h
1-iterate over begin_list
2-on each iteration move begin_list to the next node
3-on each iteration increase i +1
4-return i
*/