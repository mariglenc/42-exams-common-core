#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end){
    int len = (end >= start) ? (end - start + 1) : (start - end +1);
    int *range;
    range = malloc(sizeof(int) * len);
    if(!range)
        return NULL;

    int step = (end >= start) ? 1 : -1;
    int i =0;
    while(i < len)
    {
        range[i] = start;
        start = start +step;
        i++;
    }
    
    return range;
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%ls", ft_range(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
	return(0);
}