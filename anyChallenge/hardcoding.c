/* Hardcoding 14 divided by 3 and printing the quotient and remainder*/
#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: 0
  */
int main(void)
{
	int dividend = 14;
	int divisor = 3;
	int quotient = dividend/divisor; /* 14/3 = 4 r 2 */
	int remainder = dividend % divisor;

	printf("%i divided by %i is equal to %i, remainder %i\n", dividend, divisor, quotient, remainder);
	/* __ divided by __ is equal to __, remainder __ */

	return (0);
}
