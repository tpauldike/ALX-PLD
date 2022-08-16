#include <stdio.h>

/* My version of the strspn function: the prototype */
unsigned int _strspn(char *s, char *accept);

/* The main program */
int main ()
{

}

/*
 * _strspn - determines the length of the maximal initial
            substring consisting entirely of bytes in accept
 * @s: The substring to be scanned
 * @accept: The string containing the list of characters to
            match @s
 * Return: returns the length, in bytes, of the matching characters
 */
unsigned int _strspn(char *s, char *accept)
{
    int i = 0, j;

    while (*(s + i))
    {
        j = 0;
        while (*(accept + j))
        {
            if (*(s + 1) == *(accept + j))
            {
                break; /* break when a match is found */
            }
            j++;
        }
        if (!*(accept + j))
        {
            return (i); /* when no match is found */
        }
        i++;
    }
    return (i);
}