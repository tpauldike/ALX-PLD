#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	int b;
	a = 98;
	b = 42;
	int *c = &a, *d = &b;
	printf("addr of a is %ls\naddr of b is %ls\n", c, d);
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("\nafter swapping:\naddr of a is %ls\naddr of b is %ls\n", c, d);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}