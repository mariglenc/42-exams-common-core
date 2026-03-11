#include <stdio.h>

void    print_binary(unsigned char n)
{
    char    bits[8];
    int     i;

    i = 8;
    while (i-- > 0)       // loop 1: fill right to left
    {
        bits[i] = n % 2;
        n = n / 2;
    }
    i = 0;
    while (i < 8)         // loop 2: print left to right
    {
        printf("%d", bits[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    int num = 10;
    print_binary(num);  // prints 01010000
    return 0;
}
