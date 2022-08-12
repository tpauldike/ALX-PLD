#include <stdio.h>

void main()
{
    char greeting[] = "Hello, world";
    /**
     * greeting[0] = H i = 0
     * greeting[1] = e
     * greeting[2] = l
     * greeting[3] = l    greeting[i] != '\0'--. greeting[i]
     * greeting[4] = o
     * greeting[5] = '\0'
    */  
    printf("the third letter of the string is %c\n", greeting[2]);

    greeting[2] = 'A';

    int i;

    for (i = 0; greeting[i] != '\0'; i++)
    {
        printf("%c", greeting[i]);
    }

    printf("\nSuccess!!!!\n\n");
}


// step1 --> i = 0
// step2 --> greeting[i] != '\0 true if the char at that position is not the end
// step3 --> printf("%c\n", greeting[i]);
// step4 --> i++