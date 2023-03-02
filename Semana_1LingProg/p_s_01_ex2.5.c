#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n1, n2, copia_n1, copia_n2;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &n1, &n2);

    copia_n1 = n1;
    copia_n2 = n2;
    n1 = copia_n2;
    n2 = copia_n1;

    printf("Os numeros invetidos sao: %d %d\n\n", n1, n2);

    return 0;
}
