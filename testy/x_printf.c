#include <limits.h>
#include <stdio.h>

void test(unsigned int x)
{
	printf(", len: %d\n", printf("%x", x));
}

int main(void)
{
	test(0); // zero
	test(7);
	test(10);
	test(17);
	test(-1);
	test(100);
	test(-100);
	test(INT_MAX);
	test(INT_MIN);
	test(UINT_MAX);
}