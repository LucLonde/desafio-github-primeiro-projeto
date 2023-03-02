#include<stdio.h>
#include<stdlib.h>

int main() 
{
    int cont;
    float n, media = 0, maior = 0, menor = 100;

    for (cont = 1; cont <= 15; cont++)
    {
        printf("Digite a nota do aluno %d: \n", cont);
        scanf("%f", &n);

        media = media +n;

        if (n > maior)
            maior = n;
            if (n < menor)
                menor = n;
    }
    printf("A media entra os alunoe eh: %.2f\n", media/4);
    printf("A maior nota entre os alunos eh: %.2f\n", maior);
    printf("A maior nota entre os alunos eh: %.2f\n", menor);

    return 0;
}
