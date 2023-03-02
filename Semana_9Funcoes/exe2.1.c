#include<stdio.h>


int dobro(int n1)
{
    int res;
    res = n1*2;
    return res;
}

int main(void)
{
    int i, valor[3], res;

    //armazena a entrada de 3 valores no vetor valor[3]
    for (i = 0; i < 3; i++)
    {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &valor[i]);
    }

    //chama a funcao dobro e imprime o dobro do valor de cada posicao do vetor
    for (i = 0; i < 3; i++)
    {
        res = dobro(valor[i]); //chama a funcao
        printf("O dobro de %d eh: %d",valor[i], res);
        printf("\n");
    }
    
    return 0;
}