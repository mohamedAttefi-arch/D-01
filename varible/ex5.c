#include<stdio.h>

int main()
{
    int temp = 0;

    printf("entrez la temperature en C°: ");
    scanf("%d" ,&temp);
    if (temp < 0)
    {
        printf("l'etat de l'eau est solide");
    }
    else if (temp >= 0 && temp < 100)
    {
        printf("l'etat de l'eau est liquide");
    }
    else if (temp >= 100)
    {
        printf("l'etat de l'eau est gazeux");
    }
    
    
    
    
    

    return 0;
}