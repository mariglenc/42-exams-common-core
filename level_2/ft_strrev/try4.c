#include <unistd.h>
#include <stdio.h>

char    *ft_strrev(char *str){
    if(!str)
        return NULL;

    int len = 0;
    while(str[len])
        len++;

    char temp;
    int i = 0;
    while(i < len/2){
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
        i++;
    }
    return str;
}


int main()
{       
    char string[] = "123456"; // i = 1 len
    // str[1] = 5 - 1 -1 
    ft_strrev(string);
    printf("\n %s \n",string);
}