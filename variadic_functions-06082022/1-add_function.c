#include <stdio.h>

/**
 * add_2_num - A function that adds any two integers
 * @x: the variable that holds the first number
 * @y: the variable that holds the second number
 * Return: the sum of x and y
 */
int add_2_num(int x, int y)
{
	return (x + y);
}



/**
 * main - Entry point of the program
 * Return: 0
 */
int main(void)
{
	int a = 2, b = 5, sum = add_2_num(a, b);
	printf("%i + %i = %i\n", a, b, sum);

	return(0);
}
