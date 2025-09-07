#include<stdio.h>

int main()
{
    char c;
    printf("entrez un caractere: ");
    scanf("%c", &c);
    if(c >= 65 && c <= 90)
    {
        printf("le caractere est une lettre majuscule\n");
    }
    else
    {
        printf("le caractere est une lettre minuscule\n");
    }
    
}