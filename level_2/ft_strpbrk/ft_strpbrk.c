#include <stdio.h>
#include <string.h>

char    *ft_strpbrk(const char *s1, const char *s2)
{
    if (!s1 || !s2)
        return (0);
    int j = 0;
    while (s1[j])
    {
        int i = 0;
        while (s2[i])
        {
            if (s1[j] == s2[i])
                return ((char *)(s1 + j));
            i++;
        }
        j++;
    }
    return (0);
}


int main(void)
{
    char *original;
    char *mine;

    original = strpbrk("hello", "l");
    mine = ft_strpbrk("hello", "l");

    printf("Original function result: %s\n", original);
    printf("My function result:       %s\n", mine);

    return 0;
}