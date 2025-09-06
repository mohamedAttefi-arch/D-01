#include<stdio.h>

int main()
{
    int km_h = 0;
    float m_s;

    printf("entrez une vitesse en km/h: ");
    scanf("%d" ,&km_h);
    m_s = km_h * 0.27778;
    printf("la vitesse en m/s est: %.2f m/s", m_s);



    return 0;
}