#include<stdio.h>

int main()
{
    int km = 0;
    float y;

    printf("entrez une distance en km: ");
    scanf("%d" ,&km);
    y = km * 1093.61;
    printf("la distance en yard est: %.2f yard", y);



    return 0;
}