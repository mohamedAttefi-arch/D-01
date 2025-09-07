#include<stdio.h>

int main()
{
    int nbr;
    printf("Entez un nombre: ");
    scanf("%d", &nbr);
    if (nbr > 0)
    {
        printf("le nombre est positif\n");
    }
    else if (nbr < 0)
    {
        printf("le nombre est negatif\n");
    }
    else
    {
        printf("le nombre est nul\n");
    }
    return 0;
}