#include <unistd.h>
int is_prime(int n)
{
    int i = 2;

    if (n <= 1)
        return 0;

    while (i < n)
    {
        if (n % i == 0)
            return 0;
        i++;
    }
    return 1;
}

void putnbr(int n)
{
    char c;

    if (n > 9)
        putnbr(n / 10);

    c = (n % 10) + '0';
    write(1, &c, 1);
}