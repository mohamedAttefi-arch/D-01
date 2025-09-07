#include<stdio.h>

int main()
{
    int nbr = 0;
    printf("Entez un nombre: ");
    scanf("%d", &nbr);
    if (nbr % 2 == 0)
    {
        printf("le nombre est pair\n");
    }
    else
    {
        printf("le nombre est impair\n");
    }
}