/*2.1) Codifique, compile e execute um programa em C que na função principal:
a) Aloque dinamicamente um vetor de 5 números inteiros;
b) Peça ao usuário para digitar os 5 números no espaço alocado;
c) Imprima na tela os 5 números digitados;
d) Libere a memória alocada.
Entrada
A entrada de seu programa deverá ser 5 números inteiro e positivos que serão armazenados em um vetor
alocado dinâmicamente.
Saída
A saída deverá ser os 5 números de entrada, sem pulo de linha e com espaçamento entre eles.
Como mostrado abaixo:*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr, i;
    /*alocando espaço para 5 inteiros*/
    ptr = (int*)malloc(5 * sizeof(int));

    /*armazeando os 5 inteiros no espaço alocado*/
    for(i = 0 ; i < 5; i++){
        printf("Entre com n[%d]: ", i+1);
        scanf("%d", &ptr[i]);
    }
    /*mostrando os 5 inteiros*/
    for(i = 0 ; i < 5; i++){
        printf("%d  ", ptr[i]);
    }
    /*desalocando o espaço utilizado anteriormente*/
    free(ptr);
    return 0;
}