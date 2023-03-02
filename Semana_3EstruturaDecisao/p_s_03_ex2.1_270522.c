#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Declaração das variaveis e as inicializa
    int numero, qtdDivisores = 0;
    
    printf("\n\t\t\tDivisores de um numero qualquer.\n\n");
    
    //Armazena o valor que será analizado
    printf(" Insira um numero: ");
    scanf("%d", &numero);
    
    printf("\n Divisores de %d: ", numero);
    
    // Imprimi os divisores e obtêm a sua quantidade.
    for (int i = 1; i <= numero; ++i) {
        // Um número é divisor de outro quando o resto da divisão for igual a 0.
        if (numero % i == 0) {
            printf(" %d ", i);
            qtdDivisores++; // Incrementa a variável.
        }
    } 
    // Imprimi o valor armazenado na variável quantidadeDeDivisores.
    printf("\n\n Numero de divisores: %d\n\n", qtdDivisores);

    return 0;
    
}