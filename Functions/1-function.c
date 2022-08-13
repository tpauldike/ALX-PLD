#include <stdio.h>

// A program to Divide any two Integers and give the remainder //

int divide(int a, int b)
{
    int c = a % b; // Remainder after division //
    int d = a / b;  // Value gotten in integer type
    printf("%d / %d = %d\n", a, b, d); // This prints the
    printf("Remainder is %d\n", c);

    return c;
}

int main()
{
    int a, b;

    printf("Input an integers\n");

    scanf("%d", &a);

    printf("Enter the second integer\n");

    scanf("%d", &b);

    divide(a, b);

    return 0;
}