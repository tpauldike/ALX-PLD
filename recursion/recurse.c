/* Write a program to print the sum of numbers from 1-10 using recursion */
/* 1+2+3+4+5+6+...+10 */

#include <stdio.h>

int sum(int i);

int main(void)
{
	printf("%d\n", sum(5));
	return (0);
}

int sum(int i)
{
	if (i <= 0)
		return 0;
	else
		return i + sum(i - 1); 
}
