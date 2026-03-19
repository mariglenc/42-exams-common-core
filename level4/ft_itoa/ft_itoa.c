#include <stdlib.h>

char	*ft_itoa(int nbr)
{
    int n = nbr;
    int len = 0;
    if(n <= 0)
        len = 1;

    char *str;

    if (n == -2147483648)
    {
        str = malloc(12);
        if (!str)
            return (NULL);
        str[0] = '-'; str[1] = '2'; str[2] = '1'; str[3] = '4';
        str[4] = '7'; str[5] = '4'; str[6] = '8'; str[7] = '3';
        str[8] = '6'; str[9] = '4'; str[10] = '8'; str[11] = '\0';
        return (str);
    }

    while(nbr)
    {
        len++;
        nbr = nbr/10;
    }

    str = malloc(len + 1);
    if (!str)
        return NULL;

    str[len] = '\0';
    if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }

    if(n == 0)
        str[0] = '0';

    while(n > 0)
    {
        str[--len] = (n % 10) + '0';
        n /= 10;
    }
    return str;
}


/*
0-incldue stdlib.h (for malloc)
1-we duplicate the nr from nbr paramter 
2-initialize the length if (n =< 0) is 1 otherwise 0 (because of the sign)

scenar 1 -> 2147483648
    calculate the min value of int by 2 in power of 31
    allocate mem with malloc
    set the value of all string indexes manually
    return string

-find length of nr while iterating it and by increasing length and dividing by 10 on each iteration
-allocate the memory for string with length + 1 (for null pointer) -> check allocation if not return NULL
-add null pointer at the end of the string -> str[len] = '\0';

scnario 2 -> for nr 0
    add the first index [0]  to a string '0';

scnario 3 -> for negative nr
    add the first index [0] with string '-'
    change the sign of nr

scnario 4 -> for postivie nr
    start at str[--len] and give the value of module of nr + '0'
    divide nr by ten

return str

*/