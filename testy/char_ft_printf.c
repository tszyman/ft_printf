#include "ft_printf.h"

void	test(int c)
{
	ft_printf(", len: %d\n", ft_printf("%c", c));
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
