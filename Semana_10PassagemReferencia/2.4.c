#include<stdio.h>

typedef struct sAluno
{
    char nome;
    int matricula;
    float nota;
}Aluno;

void preencher(Aluno *pa)
{
    printf("\nNome: ");
    fflush(stdin);
    gets(pa->nome);
    fflush(stdin);
    printf("\nMatricula: ");
    scanf("&d", &pa->matricula);
    printf("\nNota: ");
    scanf("%f", &pa->nota);
}

int main()
{
    Aluno[2];
    int cont;
    
    return 0;
}
