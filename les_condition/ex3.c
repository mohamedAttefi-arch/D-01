#include<stdio.h>

int main()
{
    int a;
    int b;
    int somme;
    int triple;
    printf("Entrez deux entiers: ");
    scanf("%d %d", &a, &b);
    if (a == b)
    {
        printf("les deux entiers sont egaux\n");
        somme = a + b;
        triple = 3 * somme;
        printf("Le triple de leur somme est: %d\n", triple);

    }
    else
    {
        somme = a + b;
        printf("la somme des deux entiers est: %d\n", somme);
    }
    return 0;
    
}