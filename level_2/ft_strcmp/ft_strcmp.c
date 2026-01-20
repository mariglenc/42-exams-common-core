#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while(s1[i] || s2[i]){
        int diff = s1[i] - s2[i];
        if(diff != 0 )
            return diff;
        else
            i++;
    }
    return 0;
}

int main(void)
{
    printf("Equal strings: %d\n", ft_strcmp("abc", "abc"));      // 0
    printf("s1 < s2: %d\n", ft_strcmp("abc", "abd"));           // negative
    printf("s1 > s2: %d\n", ft_strcmp("abd", "abc"));           // positive
    printf("Shorter s1: %d\n", ft_strcmp("ab", "abc"));         // negative
    printf("Shorter s2: %d\n", ft_strcmp("abc", "ab"));         // positive
    printf("Empty strings: %d\n", ft_strcmp("", ""));           // 0
    printf("Empty vs non: %d\n", ft_strcmp("", "a"));           // negative
    printf("Non vs empty: %d\n", ft_strcmp("a", ""));           // positive

    return 0;
}