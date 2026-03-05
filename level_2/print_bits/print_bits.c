// ## Subject

// ```BASH
// Assignment name  : print_bits
// Expected files   : print_bits.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
// AT THE END.

// Your function must be declared as follows:

// void	print_bits(unsigned char octet);

// Example, if you pass 2 to print_bits, it will print "00000010"
// ```

/* #include <unistd.h> */

// void	print_bits(unsigned char octet)
// {
// 	unsigned char	result;
// 	int				i;

// 	i = 8;
// 	while ((i--) > 0)
// 	{
// 		result = (octet >> i & 1) + '0';
// 		write(1, &result, 1);
// 	}
// }
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 8;
	
	while (i--)
	// 0 0 0 1 0 1 0 0
	{
		if ((octet >> i) & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1,"\n",1);
}


int	main(void)
{
	print_bits(20);
	return (0);
}
