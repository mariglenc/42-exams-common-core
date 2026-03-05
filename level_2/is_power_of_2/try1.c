#include <stdio.h>

int	    is_power_of_2(unsigned int n){
    int num = 1;
    while (num <= n)
    {
        if(num == n){
            return 1;
        }
        num = num * 2;
    }
    return 0;
}

int main(void)
{
    unsigned int n;

    n = 1;
    printf("%u -> %d\n", n, is_power_of_2(n));

    n = 2;
    printf("%u -> %d\n", n, is_power_of_2(n));

    n = 3;
    printf("%u -> %d\n", n, is_power_of_2(n));

    n = 4;
    printf("%u -> %d\n", n, is_power_of_2(n));

    n = 8;
    printf("%u -> %d\n", n, is_power_of_2(n));

    n = 16;
    printf("%u -> %d\n", n, is_power_of_2(n));

    n = 36;
    printf("%u -> %d\n", n, is_power_of_2(n));

    return 0;
}