/**
  * If age < 18 - - not qualified, too young
  * If age > 40 - - too old
  * if age > 18 and <= 40 - - qualified
  */
#include <stdio.h>

int main(void)
{
	char fname[20];

	printf("Please enter your first name: ");
	scanf("%s", fname);	 // %c is for a single character, e.g; 'a'
	// while %s is for more than 1 character (i.e, strings). e.g; 'abc'
	printf("Welcome %s\n", fname);
		//Welcome ____

	return (0);
}
