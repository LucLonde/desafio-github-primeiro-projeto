#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float num1, num2;
    int codigo;

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    printf("Digite dois numeros reais e o codigo para o calculo\n");
    scanf("%f %f %d", &num1, &num2, &codigo);

    switch (codigo)
    {
    case 1:
        printf("A soma dos numeros eh: %.2f\n", num1 + num2);
        break;
    case 2:
        printf("A subtracao dos numeros eh: %.2f\n", num1 - num2);
        break;
    case 3:
        printf("A multiplcacao dos numeros eh: %.2f\n", num1 * num2);
    case 4:
        printf("A divisao dos numeros eh: %.2f\n", num1 / num2);
    default:
        break;
    }
    return 0;
}