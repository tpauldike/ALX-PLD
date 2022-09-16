/*A program that prints the string "+abiodun" 4 times, using putchar*/
#include <stdio.h>

int main(void)
{
	char ezekiel[] = "+abiodun";
	int i;
	int a;

	for (a = 0; a < 4; a++)
	{
		for (i = 0; i < 8; i++)
		{
			putchar(ezekiel[i]);
		}
		putchar('\n');
	}
	return (0);
}

//printf("%s\n", ezekiel);
