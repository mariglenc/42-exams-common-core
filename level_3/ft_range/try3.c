#include <stdlib.h>

int     *ft_range(int start, int end){
    int len;
    int *range;
    int step;
    
    len = (end >= start) ? end - start + 1 : start - end +1;
    step = (end >= start) ? 1 : -1;

    range = malloc(sizeof(int) * len);
    if(!range)
        return NULL;
    
    int i = 0;
    while(i < len){
        range[i] = start;
        start = start + step;
        i++;
    }

    return range;
}