#include <stdio.h>

/**
 * A program to print values from 100 to 10 recursively
 */

int list(int n)
{

	if (n == 10)
	{
		printf("%d ", n);
	}

	else
	{
		printf("%d ", n);
		list(n - 10);
	}

	return ();
}

int main(void)
{
	int x = list(100);
	printf("\n%d", x);
	return (0);
}
// int list(int n)
// {

//     for(; n >= 10; n-=10)
//         {
//             printf("%d ", n);
//         }
// }