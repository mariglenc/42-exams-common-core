#include <stdio.h>

int	ft_atoi(const char *str){
    int i = 0, res = 0, sign =1;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    
    if(str[i] == '-'){
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    while(str[i] >='0' && str[i] <= '9'){
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return res * sign;
}

int main()
{
    int output = ft_atoi(" -4 68");
    printf("output %d\n", output);
}
