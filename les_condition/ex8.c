#include<stdio.h>

int main()
{
    int n1, n2, n3;
    printf("entrez votre trois notes:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    float moyenne = (n1 + n2 + n3) / 3;
    printf("votre moyenne est: %.2f\n", moyenne);
    if (moyenne < 10)
    {
        printf("vous avez recalé\n");
    }
    else if (moyenne >= 10 && moyenne < 12)
    {
        printf("vous avez la mention passable\n");
    }
    else if (moyenne >= 12 && moyenne < 14)
    {
        printf("vous avez la mention assez bien\n");
    }
    else if (moyenne >= 14 && moyenne < 16)
    {
        printf("vous avez la mention bien\n");
    }
    else if (moyenne >= 16 && moyenne <= 20)
    {
        printf("vous avez la mention tres bien\n");
    }
    else
    {
        printf("note invalide\n");
    }
    {
        /* code */
    }
    
}