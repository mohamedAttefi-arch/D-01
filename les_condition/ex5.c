#include<stdio.h>

int main()
{
    int choix;
    int annee;
    do
    {
        printf("--------Menu--------\n");
    printf("1. convertir le nombre des années en mois\n");
    printf("2. convertir le nombre des années en jours\n"); 
    printf("3. convertir le nombre des années en heures\n");
    printf("4. convertir le nombre des années en minutes\n");
    printf("5. convertir le nombre des années en secondes\n");
    printf("0. quitter\n");
    printf("Entrez votre choix: ");
    scanf("%d", &choix);
    switch (choix)
    {
    case 1:
        printf("Entrez le nombre des années: ");
        scanf("%d", &annee);
        printf("%d années = %d mois\n", annee, annee * 12);
        break;
    case 2:
        printf("Entrez le nombre des années: ");
        scanf("%d", &annee);
        printf("%d années = %d jours\n", annee, annee * 365);
        break;
    case 3:
        printf("Entrez le nombre des années: ");
        scanf("%d", &annee);
        printf("%d années = %d heures\n", annee, annee * 365 * 24);
        break;
    case 4:
        printf("Entrez le nombre des années: ");
        scanf("%d", &annee);
        printf("%d années = %d minutes\n", annee, annee * 365 * 24 * 60);
        break;
    case 5:
        printf("Entrez le nombre des années: ");
        scanf("%d", &annee);
        printf("%d années = %d secondes\n", annee, annee * 365 * 24 * 60 * 60);
        break;
    case 0:
        printf("Au revoir!\n");
        break;
    default:
        printf("Choix invalide! Veuillez reessayer.\n");
        break;
    }

    } while (choix != 0);
    
    
}