#include<stdio.h>
 

int main()
{
    int a;
    int b;
    int c;
    double moyen_pndéré;
    printf("entrez troi nombre: ");
    scanf("%d %d %d", &a, &b, &c);
    moyen_pndéré = (a*2 + b*3 + c*5)/(2 + 3 + 5);
    printf("moyen pondéré est: %f", moyen_pndéré);
}