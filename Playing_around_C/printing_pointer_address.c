#include<stdio.h>

int main ()
{
    int i = 10;
    int *p = &i;
    
    printf("percentage p of p prints %p\nPercentage d of p prints %d\nPercentage d of *p prints %d\nPercentage p of *p prints %p\n", p, p, *p, *p);
    return 0;
}