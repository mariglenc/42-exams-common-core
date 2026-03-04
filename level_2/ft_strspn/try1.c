#include <stdio.h>
#include <string.h>

size_t  ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    while (s[i])
    {
        size_t j = 0;
        while (accept[j])
        {
            if (s[i] == accept[j])
                break;
            j++;
        }
        if (!accept[j])
            return (i);
        i++;
    }
    return (i);
}

int main(void)
{
    printf("Test 1: %u\n", (unsigned int)ft_strspn("abcde123", "abcde")); // expect 5
    printf("Test 2: %u\n", (unsigned int)ft_strspn("123abc",   "abcde")); // expect 0
    printf("Test 3: %u\n", (unsigned int)ft_strspn("abcde",    "abcde")); // expect 5
    printf("Test 4: %u\n", (unsigned int)ft_strspn("",         "abcde")); // expect 0
    printf("Test 5: %u\n", (unsigned int)ft_strspn("aabbcc",   "abc"));   // expect 6
    return (0);
}
