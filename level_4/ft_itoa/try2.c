#include <stdlib.h>

char	*ft_itoa(int nbr){
    int n  = nbr;
    int len =0;
    if(nbr <= 9)
        len = 1;
    char *str;

    if(nbr = 2147483648){
        len = 12;
        str = malloc(12);
        str[0] = '-'; str[12] = '\0';
        // ....
        return str;
    }

    while(nbr){
        len++;
        nbr = nbr / 10;
    }
    str[len] = '\0';

    if(n <0){
        str[0] = '-';
        n = -n;
    }

    if(n == 0)
        str[0] = '0';
    
    if(n > 0){
        str[--len] = (n % 10) + '0';
        n = n / 10;
    }
    return str;
}