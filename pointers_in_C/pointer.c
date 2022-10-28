#include <stdio.h>

int main(void)
{
	int num;

	int *ptr;
	ptr = &num;
	num = 10;

	printf("*ptr = %d and num = %d\n", *ptr, num);
	printf("ptr = %p and &num = %p\n", ptr, &num);
	
	return (0);
}
