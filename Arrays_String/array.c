#include <stdio.h>

int main()
{
	//storing a value to a variable
	int num = 7;

	//storing multiple values in a single variable with the help of an array;
	int num2[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	/**
	 * zero-based index --> position starting from zero
	 * first position of the array have index zero
	 */

	printf("the first element of the array is %d\n", num2[0]);

	printf("the last element of the array is %d\n", num2[8]);

	/**
	 * this will print out a random value for index 12
	 * because there are just 9 elements in the array
	 */
	printf("any element of the arrray is %d\n", num2[12]);

	return (0);
}