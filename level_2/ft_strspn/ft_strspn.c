#include <stdio.h>
#include <string.h>

/*
===========================================================
ft_strspn
-----------------------------------------------------------
This function counts how many characters from the start
of string `s` are found inside string `accept`.

It stops counting when:
- A character is NOT found in `accept`
- Or when the string `s` ends

It returns the number of matching characters.
===========================================================
*/

size_t ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    while (s[i])
    {
        int found = 0;
        size_t j = 0;
        while (accept[j])
        {
            if (s[i] == accept[j])
            {
                found = 1;
                break;
            }
            j++;
        }
        if (!found){
            return (i);
        }
        i++;
    }
    return (i);
}

int main(void)
{
    printf("Test 1: %zu\n", ft_strspn("abcde123", "abcde"));
    // printf("Test 2: %zu\n", ft_strspn("123abc", "abc"));
    // printf("Test 3: %zu\n", ft_strspn("aaaabbbccc", "ab"));
    // printf("Test 4 (empty s): %zu\n", ft_strspn("", "abc"));
    // printf("Test 5 (empty accept): %zu\n", ft_strspn("hello", ""));

    return (0);
}