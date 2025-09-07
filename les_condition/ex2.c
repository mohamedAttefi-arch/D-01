#include<stdio.h>

int main()
{
    char car;
    printf("Entrez un caractere: ");
    scanf("%c", &car);
    switch (car)
    {
    case 'a':
        printf("Vous avez entre un vouyelle\n");
        break;
    case 'e':
        printf("Vous avez entre un vouyelle\n");
        break;
    case 'i':
        printf("Vous avez entre un vouyelle\n");
        break;
    case 'o':
        printf("Vous avez entre un vouyelle\n");
        break;
    case 'u':
        printf("Vous avez entre un vouyelle\n");
        break;
    case 'y':
        printf("Vous avez entre un vouyelle\n");
        break;
    default:
        printf("Vous avez entre une consonne\n");
        break;
    }
}