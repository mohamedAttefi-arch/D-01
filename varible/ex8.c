#include<stdio.h>
#include<math.h>
 

int main()
{
    int a;
    int b;
    int c;
    double moyen_geo;
    printf("entrez troi nombre: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a<=0 || b<=0 || c<=0)
    {
        printf("les trois nombre doit etre positif");
    }
    
    moyen_geo = cbrt(a * b * c);
    printf("moyen géométrique est: %.2f", moyen_geo);
}