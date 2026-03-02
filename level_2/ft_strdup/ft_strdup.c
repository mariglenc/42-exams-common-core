#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (src[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int len = ft_strlen(src);
	dup = malloc( sizeof(char) * (len + 1));
	if (!dup)
	{
		return NULL;
	}
	
	int i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		printf("%s\n", ft_strdup(argv[1]));
// 	return (0);
// }
