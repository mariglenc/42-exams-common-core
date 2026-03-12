#include <unistd.h>
#include <stdio.h>

char    *ft_strrev(char *str){
    int len = 0;
    while(str[len])
        len++;
    
    int i = 0;
    char temp;
    while(i < len/2){
        temp = str[i];
        str[i] = str[len - i -1];
        str[len - i -1] = temp;
        i++;
    }
    return str;
}

int main(void)
{
    char nr[] = "1,2,3,4,5";
    char *res;

    res = ft_strrev(nr);

    printf("res: %s\n", res);

    return 0;
}