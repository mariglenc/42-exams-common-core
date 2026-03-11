#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	int				i;

	i = 8;
	result = 0;
	while (i-- > 0)
	{
		result = result * 2 + (octet % 2);
		octet = octet / 2;
	}
	return (result);
}
// i=8, octet=192, octet%2=0
// result = 0 * 2 + 0;  // result = 0
// octet  = 192 / 2;    // octet  = 96

// i=7, octet=96, octet%2=0
// result = 0 * 2 + 0;  // result = 0
// octet  = 96 / 2;     // octet  = 48

// i=6, octet=48, octet%2=0
// result = 0 * 2 + 0;  // result = 0
// octet  = 48 / 2;     // octet  = 24

// i=5, octet=24, octet%2=0
// result = 0 * 2 + 0;  // result = 0
// octet  = 24 / 2;     // octet  = 12

// i=4, octet=12, octet%2=0
// result = 0 * 2 + 0;  // result = 0
// octet  = 12 / 2;     // octet  = 6

// i=3, octet=6, octet%2=0
// result = 0 * 2 + 0;  // result = 0
// octet  = 6 / 2;      // octet  = 3

// i=2, octet=3, octet%2=1
// result = 0 * 2 + 1;  // result = 1  ← first 1 bit found!
// octet  = 3 / 2;      // octet  = 1

// i=1, octet=1, octet%2=1
// result = 1 * 2 + 1;  // result = 3  ← second 1 bit
// octet  = 1 / 2;      // octet  = 0

// loop ends, return 3


int	main(void)
{
	// printf("--- 38 ---\n");
	// printf("final: %d\n\n", reverse_bits(38));
	// printf("--- 100 ---\n");
	// printf("final: %d\n", reverse_bits(100));
	printf("--- 192 ---\n");
	printf("final: %d\n\n", reverse_bits(192));
	printf("--- 3 ---\n");
	printf("final: %d\n", reverse_bits(3));
	return (0);
}
