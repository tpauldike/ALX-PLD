#include <stdio.h>
void add(int a, int b)
{
    printf("%d+%d = %d\n", a, b, a+b);
}
void subtract(int a, int b)
{
    printf("%d–%d = %d\n", a, b, a-b);
}
void multiply(int a, int b)
{
    printf("%dx%d = %d\n", a, b, a*b);
}

int main()
{
    // fun_ptr_arr is an array of function pointers
    void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
    unsigned int ch, a = 15, b = 10;

    printf("Enter Choice: 0 for add, 1 for subtract and 2 "
           "for multiply\n");
    scanf("%d", &ch);

    if (ch > 2)
    {
        printf("\n\t\tInvalid input!\n");
        return 0;
    }

    (*fun_ptr_arr[ch])(a, b);

    return 0;
}