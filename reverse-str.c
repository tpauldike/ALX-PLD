#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0
 */
int main(void)
{
	char message[200], container;
	int len = 0, index = 0;

	printf("Enter or paste a SINGLE string (with no spaces) to be reversed:\n>>> ");
	scanf("%s", message);

	while (message[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		container = message[index];
		message[index] = message[len - index - 1];
		message[len - index - 1] = container;
	}

	printf("HERE IS THE REVERSED STRING:\n>>> %s\n", message);

	return (0);
}
