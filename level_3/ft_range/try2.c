// #include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	len;
	int	*range;
	int	step;
	int	i;

	len = (start >= end) ? (start - end + 1) : (end - start + 1);
	step = (start >= end) ? -1 : 1;
	
    range = malloc(sizeof(int) * len);
	if (!range)
		return (NULL);

	i = 0;
	while (i < len)
	{
		range[i] = start;
		start = start + step;
		i++;
	}
	return range;
}

/*

0-include stdlib.h
1-find length and step by comparing end with start
2-allocate memory with malloc
3-iterate over the length of array and fill it starting from value of start
4-change the value of start by the step value and over each itaration add step

*/