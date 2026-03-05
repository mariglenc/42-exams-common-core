
int		max(int* tab, unsigned int len){
    int result = tab[0];
    unsigned int i = 0;
    while(i < len){
        if(tab[i] > result){
            result = tab[i];
        }
        i++;
    }
    return result;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	tab[] = {-2, -5, -1, -4, -4, -763, -2937};

// 	printf("%i\n", max(tab, 7));
// 	return (0);
// }
