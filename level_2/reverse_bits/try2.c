#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char result = 0;
	int i = 8;
	while (i-- > 0)
	{
		result = result * 2 + (octet % 2);
		octet = octet / 2;
	}
	return result;
}

int main()
{
	unsigned char nr = 3;
	unsigned char res = reverse_bits(nr);
	printf("nr: %d", res);

	return 0;
}