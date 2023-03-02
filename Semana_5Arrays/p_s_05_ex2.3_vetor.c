#include<stdio.h>

int main(){

    int i, cod;
    float vet[15];
    
    printf("\n\n\tDigite 15 numeros reais\t\n\n\n");

    for ( i = 0; i < 15; i++)
    {
        printf("Digite o valor na posicao %d: ", i);
        scanf("%f", &vet[i]);
    }
    
    printf("\n* Digite 1 para imprimir em ordem DIRETA.\n");
    printf("* Digite 2 para imprimir em ordem INVERSA.\n");

    do{
        printf("\nDigite o codigo: \n");
        scanf("%d", &cod);

        switch (cod)
        {
        case 1:
            for ( i = 0; i < 15; i++)
            {
                printf("%.2f ", vet[i]);
            }
            printf("\n");
            break;

        case 2:
            for ( i = 14; i >= 0; i--)
            {
                printf("%.2f ", vet[i]);
            }
            printf("\n");
            break; 
        default:
            printf("\t>>CODIGO INVALIDO<<\t\n\n");
        }
    }while (cod != 1 || cod != 2);
    
    return 0;
}