#include<stdio.h>

int main()
{
    int age;
    char nom[50], prenom[50], email[50];
    char sexe;

    printf("entrez votre nom prenom age sexe(F/M) et email: \n");
    scanf("%s %s %d %c %s",nom, prenom, &age, &sexe, email);
    printf("vous etes %s %s, vous avez %d, votre sexe est %c et voici votre email %s", nom, prenom, age, sexe, email);


    return 0;
}