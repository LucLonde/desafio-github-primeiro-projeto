#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, aumento;

    printf("Digite o salario:\n");
    scanf("%f", &n1);

    aumento = n1*1.25;

    printf("O salario com aumento eh: %.2f\n", aumento);

    return 0;

}
