#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char codigo;

    printf("Digite o codigo de consumo energetico: \n");
    scanf("%c", &codigo);

    switch (codigo)
    {
    case 'A':
    case 'a':
        printf("Ventilador, Televisao\n");
        break;
    case 'B':
    case 'b':
        printf("Aparelho de som, Batedeira\n");
        break;
    case 'C':
    case 'c':
        printf("Fogao eletrico, Liquidificador\n");
        break;
    case 'D':
    case 'd':
        printf("Freezer, Geladeira, Maquina de Lavar\n");
        break;
    case 'E':
    case 'e':
        printf("Ar-condicionado, Micro-ondas\n");
        break;
    default:
    printf("Codigo invalido");
        break;
    }
}