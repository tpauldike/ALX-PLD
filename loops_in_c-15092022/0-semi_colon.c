//A program to show the work of the semi colon in C
#include <stdio.h>

int main(void)
{
	int
		a;
	int                   b;

	a = 3,
	  b = 6;

	int sum = a + b;
	printf("a is %d, b is %d\na + b is %d\n", a, b, sum);

	return (0);
}
