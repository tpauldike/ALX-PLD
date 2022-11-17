/*A program that divides and int by an int and shows the remainder*/
#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: 0
  */
int main(void)
{
	int dividend, divisor;
	//printf("dividend = %i\ndivisor = %i\n", dividend, divisor);

	printf("Enter the number to be divided: \n");
	scanf("%i", &dividend);
	printf("Enter the divisor: \n");
	scanf("%i", &divisor);

	int quotient = dividend/divisor; /* 14/3 = 4 r 2 */
	int remainder = dividend % divisor;
	
	printf("%i divided by %i is equal to %i, remainder %i\n", dividend, divisor, quotient, remainder);
	/* __ divided by __ is equal to __, remainder __ */

	return (0);
}
