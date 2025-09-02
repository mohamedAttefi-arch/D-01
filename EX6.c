#include <stdio.h>

int main() {
    int n;
    int x = 2;
    
    printf("entrer un nombre: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
     
         printf("%d\n", x);
         x +=2;
    }
    

    return 0;
}