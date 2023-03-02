#include <stdio.h>
#include <stdlib.h>

int main()
{
    int celsius, F;

    printf("Digite a temperatura em graus celsius: \n");
    scanf("%d", &celsius);

    F = celsius*(9.0/5.0)+32.0;

    printf("A temperatura em Fahrenheit eh: %d\n\n", F);

    return 0;
}
