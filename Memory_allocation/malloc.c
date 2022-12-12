/*write a program that ask users for numbers to be printed out*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, n;
	int *ptr;
	printf("Enter the number of integers you want to print: ");
	scanf("%d", &n);

	ptr = (int *)malloc(sizeof(int) * n);
	
	printf("first address is %p\n", ptr);

	/*
	 * int arr[3] = {5, 4, 3};
	 * ptr ==> addrr of the first byte of the allocated memory ---> value 1
	 *
	 * int *ptr;
	 * ptr = &var
	 */

	if (ptr == NULL)
	{
		printf("Memory was not allocated...");
		exit(1);
	}
	
	printf("Memory was successfully allocated\n");

	for (i = 0; i < n; i++)
	{
		printf("Enter an integer: ");
		scanf("%d", (ptr + i));
	}

	for (i = 0; i < n; i++)
	{
		printf("address is %p and value is %d \n", (ptr + i), *(ptr + i));
	}
	
	/* *ptr + 1 != *(ptr + 1) */


	free(ptr);
	ptr = NULL;

	printf("Address after Deallocating is %p\n", ptr);

	return (0);
}
