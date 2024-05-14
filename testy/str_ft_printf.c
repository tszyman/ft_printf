#include "ft_printf.h"

void	test(char *str)
{
	ft_printf(", len: %d\n", ft_printf("%s", str));
}

int	main(void)
{
	char	*str = NULL;

	test(str);
	test("Hello world!");			// just a string
	test("");						// empty string
	test("   ");					// spaces
	test("\t\t");				// tabs
	test("\x7F\xFF\x80");			// non-printables
	test("\x48\x65\x6C\x6C\x6F");	// ascii represetned string ("Hello")
	test("\xC2\xA9");				// unicode character string (©)
	test("\xE2\x82\xAC");			// Euro symbol (€)
	test("¡Hola!");					// non-ascii string
}
