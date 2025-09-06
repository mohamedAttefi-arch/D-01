#include<stdio.h>

int main()
{
    int a;
    int b;
    float resultat1 = 0;
    float resultat2 = 0;
    float resultat3 = 0;
    float resultat4 = 0;
    printf("entrez un nombre: ");
    scanf("%d", &a);
    printf("entrez un nombre: ");
    scanf("%d", &b);

    if (b != 0)
    {
        resultat1 = a+b;
        resultat2 = a-b;
        resultat3 = a*b;
        resultat4 = a/b;
        printf("la somme de deux nombre est: %.2f\n",resultat1);
        printf("la soustraction de deux nombre est: %.2f\n",resultat2);
        printf("la multiplication de deux nombre est: %.2f\n",resultat3);
        printf("la division de deux nombre est: %.2f\n",resultat4);
    }
    else
    {
        printf("division sur 0 est imossible");
    }

    return 0;

}