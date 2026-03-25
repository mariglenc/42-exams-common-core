#include <unistd.h>

void	print_nr(int nr)
{
	char	c;

	if (nr >= 10)
	{
		print_nr(nr / 10);
	}
	c = nr % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int nr = 1;
	while (nr <= 100)
	{
		if (nr % 3 == 0 && nr % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if (nr % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if (nr % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
		{
			print_nr(nr);
		}
        write(1,"\n",1);
        nr ++;
	}
}