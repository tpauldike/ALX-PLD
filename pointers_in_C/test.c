#include <stdio.h>

int main(void)
{
	int n;
	int *new;
	new = &n;

	n = 402;
	printf("n=%d\n", n);
	// reset_to_98(&n);
	*new = 98;
	printf("n=%d\n", n);
	return (0);
}