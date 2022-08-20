// Have a little fun with this

#include <stdio.h>

int main()
{
    int a = 4, b = 3;
    a = a | b;
    b = a & b;
    a = ~a;
    b = a ^ b;

    printf("a = %d and b = %d\n", a, b);
    return (0);
}