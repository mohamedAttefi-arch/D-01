#include<stdio.h>

int main()
{
    int temp = 0;
    float k;

    printf("entrez une temperature en C°: ");
    scanf("%d" ,&temp);
    k = temp + 273.15;
    printf("la temperature en kelvin est: %.2f", k);



    return 0;
}