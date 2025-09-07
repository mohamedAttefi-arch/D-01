#include<stdio.h>

int main()
{
    int jour;
    int mois;
    int annee;
    printf("entrez une date (XX/XX/XXXX): ");
    scanf("%d/%d/%d", &jour, &mois, &annee);
    switch (mois)
    {
    case 1:
        printf("la date formatee est: %d janvier %d\n", jour, annee);
        break;
    case 2:
        printf("la date formatee est: %d fevrier %d\n", jour, annee);
        break;
    case 3:
        printf("la date formatee est: %d mars %d\n", jour, annee);
        break;
    case 4:
        printf("la date formatee est: %d avril %d\n", jour, annee);
        break;
    case 5: 
        printf("la date formatee est: %d mai %d\n", jour, annee);
        break; 
    case 6:
        printf("la date formatee est: %d juin %d\n", jour, annee);
        break;
    case 7:
        printf("la date formatee est: %d juillet %d\n", jour, annee);
        break;
    case 8:
        printf("la date formatee est: %d aout %d\n", jour, annee);
        break;
    case 9:
        printf("la date formatee est: %d septembre %d\n", jour, annee);
        break;
    case 10:
        printf("la date formatee est: %d octobre %d\n", jour, annee);
        break;
    case 11:
        printf("la date formatee est: %d novembre %d\n", jour, annee);
        break;
    case 12:
        printf("la date formatee est: %d decembre %d\n", jour, annee);
        break;    
    default:
        printf("date invalide\n");
        break;
    }

    return 0;
}