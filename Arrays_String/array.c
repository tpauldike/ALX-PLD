#include <stdio.h>

int main()
{

    int num = 7;
    int num2[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    //zero-based index --> position starting from zero

    printf("the first element of the array is %d\n", num2[0]);

    printf("the last element of the array is %d\n", num2[8]);

    printf("any element of the arrray is %d\n", num2[12]);

    return (0);
}