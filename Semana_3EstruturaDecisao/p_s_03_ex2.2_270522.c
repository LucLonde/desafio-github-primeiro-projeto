#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Declaração das variaveis e as inicializa
    int n, i = 1, result = 1;
   
    printf("\n\t\t\tNumeros Triangulares.\n\n");

    //Armazena o valor que será analizado
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    //Verifica se é a condição é verdadeira
    while (i <= n)
    {
        i++; //incrementa variavel
        printf("%d\t", result);
        result = result + i; //analiza o valor de uma variavel e incrementa em outra
    }
    return 0;
}