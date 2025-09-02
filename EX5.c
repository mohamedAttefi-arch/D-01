#include <stdio.h>

int main() {
    int b;
    int e;
    int pui = 1;
    
    printf("entrer la base: ");
    scanf("%d", &b);
    printf("entrer l'exposant: ");
    scanf("%d", &e);
    
    for(int i = 0; i < e; i++)
    {
        pui*=b;

    }
    printf("%d", pui);
    

    return 0;
}