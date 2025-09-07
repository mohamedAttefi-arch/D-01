#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    int b;
    int c;
    int delta;
    int x;
    int equation;
    printf("Entrez les coefficients a, b et c de l'equation ax^2 + bx + c = 0: ");
    scanf("%d %d %d", &a, &b, &c);
    delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        printf("L'equation n'a pas de solution reelle\n");
    }
    else if (delta == 0)
    {
        x = -b / (2 * a);
        printf("L'equation a une solution double: x1 = x2 = %d\n", x);
    }
    else
    {
        float x1;
        float x2;
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("L'equation a deux solutions reelles distinctes: x1 = %.2f et x2 = %.2f\n", x1, x2);
    }

    return 0;
}