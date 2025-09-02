#include <stdio.h>





int main() {
    int nombre;
    int x;
    printf("entrer un nombre:");
    scanf("%d", &nombre);

    for(int i=1; i<=10; i++)
    {
    int x;
    x = i * nombre;
    printf("%d\n", x);
    
    
    }

    return 0;
}