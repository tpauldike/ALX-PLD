/* A programs that adds 2 and 5 and prints the sum */

#include <stdio.h> /* The header file containing the printf fuction */

/**
 * main - Entry point of the program
 * Return: 0
 */
int main(void)
{
	/**
	 * declaration of variables:
	 * it simply could have been a sigle line, as follows;
	 * int x, y, sum;
	 */
	int x;
	int y;
	int sum;

	/* initializing the variables */
	x = 2;
	y = 5;
	sum = x + y;

	/**
	 *  note that everything written so far could in just one
	 * line, as follows;
	 * int x = 2, y = 5, sum = x + y;
	 */
	printf("%i + %i = %i\n", x, y, sum); /* the instruction to print */

	return (0); /* the return value */
}
