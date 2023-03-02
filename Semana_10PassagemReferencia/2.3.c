#include <stdio.h>

void preencheVetor(int *vet, int n)
{
    int cont;
    for(cont=0; cont<n; cont++)
    {
        printf("DIGITE A %dº POSIÇAO DO VETOR: ", cont+1);
        scanf("%d", &vet[cont]);
    }
}

void imprimeVetor(int *vet, int n)
{
    int cont;
    printf("\n");
    for(cont=0; cont<n; cont++)
    {
        printf("%d ", vet[cont]);
    }
    printf("\n");
}

int retornaMaior(int *vet, int n)
{
    int cont, maior=0;

    for(cont=0; cont<n; cont++)
    {
            if (vet[cont] > maior)
            {
                maior = vet[cont];
            }
    }
return maior;
}

int main()
{
    int n, res;
    int vet[n];

    printf("DIGITE O TAMANHO DO VETOR: \n");
    scanf("%d", &n);

    preencheVetor(vet, n);
    imprimeVetor(vet, n);
    res = retornaMaior(vet, n);

    printf("O MAIOR NUMERO DO VETOR EH : %d", res);

    return 0;
}