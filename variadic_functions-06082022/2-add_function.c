#include <stdio.h>

/**
 * add_2_num - A function that adds any two integers
 * @x: the variable that holds the first number
 * @y: the variable that holds the second number
 * Return: the sum of x and y
 */
int add_2_num(int x, int y)
{
	int sum = x + y;

	printf("%i + %i = %i\n", x, y, sum);

	return (sum);
}



/**
 * main - Entry point of the program
 * Return: 0
 */
int main(void)
{
	add_2_num(0, 1);
	add_2_num(1, 1);
	add_2_num(2, 1);
	add_2_num(200, 5000);

	return(0);
}
