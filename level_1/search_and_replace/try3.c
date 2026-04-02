#include <unistd.h>

int	main(int argc, char **argv){
	if (argc == 4 && argv[2][1] == "\0" && argv[3][1] == "\0"){
		int i = 0;
		while (argv[1][i]){
			if (argv[1][i] = argv[2][0]){
				argv[1][i] = argv[3][0];
			}
			write(1, &argv[1][i], 1);
		}
	}
	write(1, "\n", 1);
}

/*
0 - if not exactly 3 arguments: print newline and exit
0 - also check that argument 2 and 3 are single characters (av[2][1] == '\0' && av[3][1] == '\0')
1 - loop through each character of the string (av[1])
2 - if current character matches the search character (av[2][0]): replace it with av[3][0]
3 - print the original character
4 - print newline
*/