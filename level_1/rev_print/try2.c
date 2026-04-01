#include <unistd.h>

int	main(int argc, char **argv)
{
	int	len;
	if (argc == 2)
	{
		len = 0;
		while (argv[1][len])
			len++;

		len--;
		while (argv[1][len]){
			write(1, &argv[1][len], 1);
			len--;
		}
	}
	write(1, "\n", 1);
}

/*
0-check if the nr of args is 2
1-iterate over first arg and find the length
3-iterate on reverse and print each char on each iteration
*/