// #include <stdio.h>
#include <stdlib.h>

int find_len(char *str){
    int len = 0;
    while (str[len])
        len++;

    return len;
}

char    *ft_strdup(char *src){
    int len = find_len(src);
    int i = 0;
    char * dup;
    dup = malloc(sizeof(char) * len +1);
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return dup;
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		printf("%s\n", ft_strdup(argv[1]));
// 	return (0);
// }