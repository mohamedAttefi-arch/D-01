#include<stdio.h>
#include<math.h>

int main()
{
    float X1, Y1, Z1;
    float X2, Y2, Z2;
    float distance;

    printf("entrez les coordonneé (x1 y1 z1) de point 1: \n");
    scanf("%f %f %f",&X1, &Y1, &Z1);
    printf("entrez les coordonneé (x2 y2 z2) de point 2: \n");
    scanf("%f %f %f",&X2, &Y2, &Z2);

    distance = sqrt(pow(X2-X1, 2)+pow(Y2 - Y1, 2)+pow(Z2 - Z1, 2));

    printf("la distance entre les deux points est: %f",distance);

    return 0;
}
