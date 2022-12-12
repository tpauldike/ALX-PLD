#include <stdio.h>

int main(void)
{
	int a = 98, b = 42;
	int *c = &a, *d = &b;
	printf("addr of a is %p\naddr of b is %p\n", c, d);
	printf("a=%d, b=%d\n", a, b);
	int e;
	e = *c;
	*c = *d;
	*d = e;

	printf("\nafter swapping:\naddr of a is %p\naddr of b is %p\n", c, d);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}