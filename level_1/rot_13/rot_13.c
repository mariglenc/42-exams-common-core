#include <unistd.h>

int	main(int argc, char **argv)
{
    if (argc == 2) {
        int	i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
				argv[1][i] += 13;
			else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
				argv[1][i] -= 13;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
				argv[1][i] += 13;
			else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
				argv[1][i] -= 13;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

/*
0 - if not exactly 1 argument: print newline and exit
1 - loop through each character
2 - if letter a-m or A-M: shift forward  +13  → (a→n, m→z) / (A→N, M→Z)
3 - if letter n-z or N-Z: shift backward -13  → (n→a, z→m) / (N→A, Z→M)
4 - else: print as-is (numbers, symbols, spaces)
5 - print newline
*/