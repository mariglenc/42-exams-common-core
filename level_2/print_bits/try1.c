#include <stdio.h>

void print_binary(int n)
{
    if (n > 1)
        print_binary(n / 2);
    printf("%d", n % 2);
}

int main()
{
    int num = 255;
    print_binary(num);  // prints 1101
    return 0;
}
