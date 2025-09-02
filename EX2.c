int main() {
    int n;
    int x = 1;

    printf("entrer un nombre:");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++)
    {
    x = x * i;
    
    }
      printf("%d", x);

      return 0;

}