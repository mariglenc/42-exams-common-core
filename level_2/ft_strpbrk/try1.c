#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	j;
	int	i;

	if (s1 && s2)
	{
		j = 0;
		while (s1[j])
		{
			i = 0;
			while (s2[i])
			{
				if (s1[j] == s2[i])
				{
					// return ((char *)s1 + j);
					return (char *)&s1[j];
				}
				i++;
			}
			j++;
		}
		return (NULL);
	}
	else
	{
		return (NULL);
	}
}

int	main(void)
{
	char *str;
	str = ft_strpbrk("hello", "l");
	printf("%s \n", str);
}