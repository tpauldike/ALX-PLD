#include <stdio.h> 

int main(void)
{
	int a = 5, b = 9;

	printf("a is %i and b is %i\n", a, b);
	int c;
	c = a;
	a = b;
	b = c;

	// printf("c is %i and a is %i\n", c, a);
	printf("a is %i and b is %i after swapping\n", a, b);

	return (0);
}