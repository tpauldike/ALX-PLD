/**
  * If age < 18 - - not qualified, too young
  * If age > 40 - - too old
  * if age > 18 and <= 40 - - qualified
  */
#include <stdio.h>

int main(void)
{
	char letter;

	printf("Please enter your first name: ");
	scanf("%c", &letter);	 // %c is for a single character, e.g; 'a'
	// while %s is for more than 1 character (i.e, strings). e.g; 'abc'
	printf("The letter you entered is %c\n", letter);

	return (0);
}
