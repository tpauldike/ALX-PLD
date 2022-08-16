#include <stdio.h>


int mul_table(int num, int times)
{
    int i, result;
    
    for(i = 1; i <= times; i++)
    {
        result = num * i;
        printf("%d x %d = %d\n", num, i, result);
    }
}

int main(void)
{
    int a = 2, b = 12;
    int timestable = mul_table(a, b);
    
    putchar('\n');
    mul_table(3, 12);
    
    putchar('\n');
    mul_table(4, 12);
    
    putchar('\n');
    mul_table(5, 12);
    
    return (0);
}