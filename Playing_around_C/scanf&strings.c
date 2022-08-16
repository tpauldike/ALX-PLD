#include<stdio.h>

int main()
{
    
    char name[6];
    char surname[15];
    char midname[15];
    
    puts("Enter your first name: ");
    scanf("%s", &name);
    
    puts("Enter your middle name: ");
    scanf("%s", &midname);
    
    puts("Enter your surname: ");
    scanf("%s", &surname);
    
    printf("\nwelcome %s %s %s", name, midname, surname);
    return 0;
}