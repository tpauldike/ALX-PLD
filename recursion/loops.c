/* Write a program to print the sum of numbers from 1-10 */
/* 1+2+3+4+5+6+...+10 */


#include <stdio.h>

int main(void)
{
	int i, sum = 0;

	for (i = 1; i <= 10; i++)
	{
		sum = sum + i;
	}
	printf("%d\n", sum);

	return (0);
}
