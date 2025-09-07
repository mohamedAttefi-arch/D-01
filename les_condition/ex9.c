#include<stdio.h>

int main()
{
    char c;
    printf("entrez un caractere: ");
    scanf("%c", &c);
    if(c <= 126 && c >= 32)
    {
        printf("le caractere est fait partie des alphabet\n");

        if(c >= 65 && c <= 90)
        {
            printf("le caractere est une lettre majuscule\n");
        }
        else if(c >= 97 && c <= 122)
        {
            printf("le caractere est une lettre minuscule\n");
        }
        
    }
    else
    {
        printf("le caractere n'est pas fait partie des alphabet\n");
    }
    return 0;
    
    
}