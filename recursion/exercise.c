#include <stdio.h>

int func(int n)
{
	if (n == 1)
		return 4;
	else
		return 5 + func(n - 2);
}

int main(void)
{
	printf("%d\n", func(3));

	return (0);
}

/**
 * 6
 * 9
 * 10
 * 14
 */
