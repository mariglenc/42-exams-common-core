#include <stdio.h>

int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }

    if(str[i]=='-'){
        i++;
        sign = sign * -1;
    }

    while(str[i] <= 57 && str[i] >= 48 )
    {
        res = res *10 + (str[i] - '0');
        i++;
    }

    return res * sign;
}

int main()
{
    int output = ft_atoi(" -4 68");
    printf("output %d\n", output);
}
