#include <stdio.h>

void	test(int c)
{
	printf(", len: %d\n", printf("%c", c));
}

int	main(void)
{
	test('A');
	test('7');
	test('\t');
	test(' ');
	test('\x7F'); // Max ASCII character
	test('\xFF'); // Extended ASCII character
	test('\x80'); // non-ASCII character
}
