/*
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int j, i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] > 96 && argv[1][i] < 123)
			{
				j = 0;
				while (j < argv[1][i] - 96)
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else if (argv[1][i] > 64 && argv[1][i] < 91)
			{
				j = 0;
				while (j < argv[1][i] - 64)
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
		}
	}
	write(1, "\n", 1);
}

/*
0-check if nr of args is 2
1-iterate over the first arg char
2-check if it is lowecase or upperca
3-on each case iterate as much as character is from the first character
4-print each iteration the character
*/