#include "ft_list.h"

int	ft_list_size(t_list *begin_list){

    int counter = 0;
    while(begin_list){
        begin_list = begin_list -> next;
        counter ++;
    }
    return counter;
}

/*
0-inlcude ft_list.h with " "
1-declare an COUNTER integer  = 0
2-iterate over begin_list 
3-on each iteration move node to the next one with begin_list -> next
4-increase counter by one
5-return the counter
*/