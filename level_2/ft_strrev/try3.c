#include <stdio.h>

char    *ft_strrev(char *str)
{
    // find str len
    int len = 0;
    while(str[len])
    {
        len++;
    }

    // declare index and temp char
    int i = 0;
    char temp;
    // switch first char with last
    while(i < len/2)
    {
        temp = str[i];
        str[i] = str[len - i -1];
        str[len - i - 1] = temp;
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