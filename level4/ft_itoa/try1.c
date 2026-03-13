#include <stdlib.h>
#include <stdio.h>

static int	count_len(int n)
{
	int	len;

	if (n == 0)
		return (1);

	len = (n < 0) ? 1 : 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char	*str;

	if (nbr == -2147483648)
	{
		str = malloc(12);
		if (!str)
			return (NULL);
		str[0]='-';str[1]='2';str[2]='1';str[3]='4';str[4]='7';
		str[5]='4';str[6]='8';str[7]='3';str[8]='6';str[9]='4';
		str[10]='8';str[11]='\0';
		return (str);
	}
	len = count_len(nbr);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
// ```

// ### Why INT_MIN must be hardcoded without `long`
// ```
// INT_MIN = -2147483648
// -INT_MIN = 2147483648  ← doesn't fit in int! (max is 2147483647)

int	main(void)
{
	char	*result;

	// basic cases
	result = ft_itoa(0);         printf("[%s]\n", result); free(result);
	result = ft_itoa(42);        printf("[%s]\n", result); free(result);
	result = ft_itoa(-42);       printf("[%s]\n", result); free(result);

	// big numbers
	result = ft_itoa(2147483647);  printf("[%s]\n", result); free(result);
	result = ft_itoa(-2147483648); printf("[%s]\n", result); free(result);

	// other
	result = ft_itoa(1);         printf("[%s]\n", result); free(result);
	result = ft_itoa(-1);        printf("[%s]\n", result); free(result);
	result = ft_itoa(100);       printf("[%s]\n", result); free(result);
	result = ft_itoa(-1000);     printf("[%s]\n", result); free(result);

	return (0);
}
