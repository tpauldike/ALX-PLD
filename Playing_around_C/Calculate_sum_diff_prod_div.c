#include<stdio.h>

int main(void)
{
    int n1, n2, sum;

    printf("Calculate the sum, difference, product & dividend of any two numbers!\n\nEnter the first number\n\n");
    scanf("%i1", &n1);

    printf("\nEnter the next number\n\n");
    scanf("%i1", &n2);

    sum = n1 + n2;
    printf("\nSUM: The sum of %i and %i is %i\n\n", n1, n2, sum);

    if(n1 > n2)
    {
        printf("DIFFERENCE: The difference between %i and %i is %i\n\n", n1, n2, n1-n2);
    }
    else if (n1 == n2)
    {
        printf("DIFFERENCE: Both numbers are same and have no difference\n\n");
    }
    else
        printf("DIFFERENCE: The difference between %i and %i is %i\n\n", n1, n2, n2-n1);

    printf("PRODUCT: The product of %i and %i is %d\n\n", n1, n2, n1*n2);
    
    printf("DIVIDEND: %i divided by %i is %d, remainder %d\n\nThank you!\n", n1, n2, n1/n2, n1%n2);

    return (0);
}