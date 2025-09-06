#include<stdio.h>

int main()
{
    float rayon;
    float PI = 3.14159;
    float volume;
    printf("entrez le rayon du cercle: ");
    scanf("%f", &rayon);
    volume = (4.0/3) * PI * rayon * rayon * rayon;
    printf("le volume de la sphere est: %.2f", volume);
}