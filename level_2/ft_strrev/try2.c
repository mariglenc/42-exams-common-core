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
    while(i < len -1)
    {
        temp = str[i];
        str[i] = str[len -1];
        str[len -1] = temp;
        i++;
        len--;
    } 
    return str;
}

int main()
{
    char string[] = "wasuppp";
    ft_strrev(string);
    printf("\n %s \n",string);
}