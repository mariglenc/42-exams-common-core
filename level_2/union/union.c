#include <unistd.h>
/*
We want to print each character only once, keeping the order in which characters appear.
Steps:
    Go through the first string

    Print a character only if it did not appear earlier in the same string

    Go through the second string

    Print a character only if:

    it did not appear earlier in the second string

    and it does not exist in the first string

    Print a newline at the end

    If the program does not receive exactly 2 strings → just print \n.

    check if character c appears before position pos in str 

*/
int	already_printed(char *str, char c, int pos)
{
	int	i = 0;

	while (i < pos)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/* check if character c exists anywhere in str */
int	in_string(char *str, char c)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str1;
	char	*str2;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}

	str1 = argv[1];
	str2 = argv[2];

	/* print characters from first string */
	i = 0;
	while (str1[i])
	{
		if (!already_printed(str1, str1[i], i))
			write(1, &str1[i], 1);
		i++;
	}

	/* print characters from second string */
	i = 0;
	while (str2[i])
	{
		if (!already_printed(str2, str2[i], i)
			&& !in_string(str1, str2[i]))
			write(1, &str2[i], 1);
		i++;
	}

	write(1, "\n", 1);
	return (0);
}
