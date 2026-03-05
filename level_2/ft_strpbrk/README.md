## Subject

```BASH
Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);
```
strpbrk ≈ STRing Pointer BReaK-> Search a string for any of a set of characters and break there.

So the function:
    -scans a string  
    -looks for any character from another string
    -breaks (stops) at the first match
    -returns a pointer to that position