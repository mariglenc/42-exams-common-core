#include <stdio.h>

char    *ft_strrev(char *str)
{
    // 1.find string length
    int len = 0;
    while(str[len])
    {  
        len++;
    }
    
    // 2. delcare index and temp character
    // replace first string with last and last with first from a temp variable 
    int i = 0;
    char temp;
    while(i < len -1)
    {
        temp = str[i];
        str[i] = str[len-1];
        str[len-1] = temp;
        i++;
        len--;
    }
    return str;
}
int main()
{
    char string[] = "helloooo";
    ft_strrev(string);
    printf("string: \n %s \n",string);
}