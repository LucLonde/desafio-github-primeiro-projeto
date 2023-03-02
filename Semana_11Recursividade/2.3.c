#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct sAluno
{
    char nome;
    int matricula;
    float cr;
}Aluno;

void repet(Aluno *a)
{
    if (a == 2)
        return 0;

    else
    {
        repet(a + 1);
    }      
}

int main()
{

    Aluno cad[2];
    fflush(stdin);
    printf("Nome do aluno: ");
    gets(cad->nome);
    fflush(stdin);
    printf("matricula: ");
    scanf("%d", &cad->matricula);
    printf("CR: ");
    scanf("%f", &cad->cr);

    printf("\n");
    system("pause");
    return 0;
}