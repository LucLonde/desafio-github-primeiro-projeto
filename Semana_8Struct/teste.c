#include <stdio.h>
#include <stdlib.h>

int main() {

     struct pessoas {

        char nome[20];
        int idade;
        float peso;
        float altura;

    };

    struct pessoas usuario[3];

    int i;

    for (i=0; i<=2; i++)
    {

        printf("\n");
        printf("\nDigite seu nome: ");
        gets(usuario->nome);

        printf("\nDigite sua idade: ");
        scanf("%i", &usuario->idade);
        fflush(stdin);

        printf("\nDigite seu peso: ");
        scanf("%f", &usuario->peso);
        fflush(stdin);

        printf("\nDigite sua altura: ");
        scanf("%f", &usuario->altura);
        fflush(stdin);
    }

    for (i=0; i<=2; i++)
    {
      printf("\n%s, com %i anos voce pesa %.2f e tem %.2f de altura!", usuario.vetor[i], usuario[i].idade, usuario[i].peso, usuario[i].altura);

    }
    printf("\n\n");
    return(0);
}