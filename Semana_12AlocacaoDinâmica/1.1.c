#include<stdio.h>
#include<stdlib.h>

int main()
{

    int *vet;
    int n, i;
    int pares = 0, impares = 0;

    printf("Digite o valor n:\n");
    scanf("%d", &n);

    vet = (int*) malloc (n*sizeof(int));

    printf("Digite os elementos\n");
    for(i=0; i scanf("%d", &vet[i]))
    {
        printf("Os elementos digitados sao:\n");
        for(i=0; i printf("%d", vet[i])
        {
            if( vet[i]%2==0)
            {
                pares++;
            }
            else
            {
                impares++;
            }
        } 
    }
    printf("\n");

    printf("Pares: %d\nImpares: %d\n", pares, impares);


    free(vet);
    return 0;
}