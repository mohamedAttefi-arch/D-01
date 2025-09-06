#include<stdio.h>

int main()
{
    float longueur;
    float largeur;
    float surface;
    printf("entrez la longueur et la largeur du rectangle: \n");
    scanf("%f %f", &longueur, &largeur);
    surface = longueur * largeur;
    printf("la surface du rectangle est: %.2f", surface);


    return 0;

}