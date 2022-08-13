// Write a function that prints strings, followed by a new line.

// Prototype: void print_strings(const char *separator, const unsigned int n, ...);
// where separator is the string to be printed between the strings
// and n is the number of strings passed to the function
// You are allowed to use printf
// If separator is NULL, don’t print it
// If one of the string is NULL, print (nil) instead
// Print a new line at the end of your function


#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	
	va_start(strings, n);

	unsigned int i; //index 
	char *s; // pointer to string to be printed

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);
		printf("%s", s);
	}
	printf("\n");
	va_end(strings);
}

int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}
