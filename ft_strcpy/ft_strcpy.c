#include <unistd.h>


void ft_write_str(char *str)
{
    while (*str)
    {
        write(1, str++, 1);
    }
}

char	*ft_strcpy(char *dest, char *src)
{
    int i = 0;

    while(src[i]){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int	main(void)
{
	char dest[50];
	char *src = "asd asd test copy";

	ft_strcpy(dest, src);
	ft_write_str(dest);
	return (0);
}