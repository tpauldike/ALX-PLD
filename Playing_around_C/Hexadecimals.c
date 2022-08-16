/*
 * A program that prints hexadecimal forms from
 * 1 to 100.
 * Author: Topman Paul-Dike
 */

#include<stdio.h>

/*
 * main - Entry point of the program
 * @x: hexadecimal numbers
 * @i: Arabic numbers
 * Return: Always returns 0
 */
int main()
{
    int x = 0;
    int i = 0;

    printf("Hexadecimals (1-100)\n\n");
    while (i <= 100)
    {
        printf("%i is %p ", i, x);
        putchar('\n');
        i++;
        x++;
    }

    return 0;
}