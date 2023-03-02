#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Declaração das variaveis e as inicializa
    int n, i, result = 0;

    printf("\n\t\tQuadrado de N\n\n");

    //Armazena o valor que será analizado
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    //Verifica se é a condição é verdadeira
    for (i = 0; i < n; i++)
    {
        result = result + ((i * 2)+1); //faz a soma dos numeros impares de N
        
    }
    printf("O quadrado de N eh: %d\n", result);

    return 0;
}
