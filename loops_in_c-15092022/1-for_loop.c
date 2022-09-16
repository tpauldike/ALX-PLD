/*A program that prints +abiodun to the standard output using putchar*/

#include <stdio.h>

int main(void)
{
	char ezekiel[] = "+abiodun";
	int index;

	for(index = 0; index <= 7; index++)
	{
		putchar(ezekiel[index]);
	}

	putchar('\n');
	return (0);
}

/**
 * Without the loop above, it would have been like this:
 * putchar('+');
 * putchar('a');
 * putchar('b');
 * putchar('i');
 * putchar('o');
 * putchar('d');
 * putchar('u');
 * putchar('n');
 */
