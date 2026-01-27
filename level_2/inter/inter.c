#include <unistd.h>

int check_char_not_exist(char *res, char c)
{
	int i = 0;

	while (res[i]) // "c"
	{
		if (res[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int check_char_exist(char *str1, char *str2)
{
	int i = 0;

	while (str1[i] || str2[i]) // "c"
	{
		if (str1[i] == str2[i])
			return 1;
		i++;
	}
	return 0;
}

int main(int argc, char **argv)
{
	int i;
	int j = 0;
	char res[256];

	if (argc == 3)
	{
		res[0] = '\0';

		i = 0;
		while (argv[1][i])
		{
			if (!check_char_not_exist(res, argv[1][i]))
			{
				res[j] = argv[1][i];
				j++;
				res[j] = '\0';
				write(1, &argv[1][i], 1);
			}
			i++;
		}

		i = 0;
		while (argv[2][i])
		{
			if (!check_char_not_exist(res, argv[2][i]))
			{
				res[j] = argv[2][i];
				j++;
				res[j] = '\0';
				write(1, &argv[2][i], 1);
			}
			i++;
		}
	}

	write(1, "\n", 1);
	return 0;
}
