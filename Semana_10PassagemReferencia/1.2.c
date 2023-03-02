#include <stdio.h>

void incrementa(int *pn)
{
    *pn = *pn+2;
}

int main()
{

    int n, cont=1;

    printf("DIGITE UM NUMERO:");
    scanf("%d", &n);

    while(cont<=n)
    {
        printf("%d ", cont);
        incrementa(&cont);
    }
    
    return 0;
}