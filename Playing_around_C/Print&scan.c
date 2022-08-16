#include<stdio.h>

int main(void)
{
    int Age;
    char yn;

    printf("Welcome! Enter your age\n");

    scanf("%i2\n", &Age);

    if (Age <= 17)
    {
        printf("Sorry! You are %i years of age, you disqualify\n", Age);
    }
    else
    {
        if (Age >= 18 && Age <= 30)
        {
            printf("Congratulations! At %i years of age, you qualify\n\n\n", Age);
            printf("Enter y to accept or n to defer the offer\n", yn);
            scanf("%c1", &yn);
            if (yn == 121 || yn == 110)
            {
                printf("Thank you!");
            }
            else
                printf("Invalid response! Start over!!");
        }
        else
            printf("Sorry! A %i year old is not accepted", Age);
    }
    putchar ('\n');
    return (0);
}