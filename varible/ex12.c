#include<stdio.h>

int main()
{
    int nombre;
    int mille;
    int cent;
    int dix;
    int un;
    int inverse;

    printf("entrez un nombre entre 0 et 9999: ");
    scanf("%d", &nombre);
    if (nombre < 0 || nombre > 9999)
    {
        printf("le nombre doit etre entre 0 et 9999");
    }
    else
    {
        mille = nombre / 1000;
        cent = (nombre % 1000) / 100;
        dix = (nombre % 100) / 10;
        un = nombre % 10;
        inverse = un * 1000 + dix * 100 + cent * 10 + mille;
        printf("le nombre inverse est: %d", inverse); 
    }
    return 0;
}    