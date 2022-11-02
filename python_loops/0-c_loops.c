/**
  * If age < 18 - - not qualified, too young
  * If age > 40 - - too old
  * if age > 18 and <= 40 - - qualified
  */
#include <stdio.h>

int main(void)
{
	char fname[20];
	int age;

	printf("Please enter your first name: ");
	scanf("%s", fname);	 // %c is for a single character, e.g; 'a'
	// while %s is for more than 1 character (i.e, strings). e.g; 'abc'

	printf("Enter your age: ");
	scanf("%d", &age);

	if (age < 18)
		printf("sorry %s, you are too young and not qualified\n", fname);
	else if (age >= 18 && age <= 40)
		printf("Welcome %s, You have access to continue!!!\n", fname);
	else
		printf("Oops, You are too old to be here, %s\n", fname);

	return (0);
}
