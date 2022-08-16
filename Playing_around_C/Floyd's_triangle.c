#include <stdio.h>

int main (void)
{
    int n = 1, rows, i, j;
    int n2 = 1, rows2, i2, j2;

    printf("PRINT TWO FLOYD'S TRIANGLE\n\nEnter the no. of rows to be printed: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", n);
            n++;
        }
        putchar ('\n');
    }

    printf("\nTHE 2ND FLOYD'S TRIANGLE\n\nEnter the no. of rows to be printed: ");
    scanf("%d", &rows2);

    for (i2 = 1; i2 <= rows2; i2++)
    {
        for (j2 = 1; j2 <= i2; j2++)
        {
            printf("%d ", n2);
            n2++;
        }
        putchar ('\n');
    }
    printf("\nYou may compare both triangles\n");
    return (0);
}