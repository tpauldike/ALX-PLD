//A program that prints the multiplicaton table for any given
//integer for a specified number of times.

#include <stdio.h>

int times_table(int no, int x); //the times table function

/*
 * times_table - prints the multiplication table
 * @no: the number to be multiplied
 * @x: the number of times the integer will be multiplied
 * Return: always returns 0
 */

int times_table(int no, int x)
{
    int i = 1;

    while (i <= x)
    {
        printf("%d x %d = %d\n", no, i, no * i);
        i++;
    }
    putchar ('\n');
    return (0);
}

/* The main program that calls the times table function to print
the multiplication table for 2, 3, 4 & 5, where x is 12 */
int main (void)
{
    int j = 2, n = 5;

    while (j <= n)
    {
        times_table(j, 12);
        j++;
    }

    return (0);
}
