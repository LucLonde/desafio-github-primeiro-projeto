#include <stdio.h>

typedef struct sPessoa
{
    char nome[31];
    int idade;
}pessoa;

int main()
{
    pessoa a;
    pessoa *p;

    printf("DIGITE SEU NOME:\n");
    gets(a.nome);
    printf("DIGITE SUA IDADE:\n");
    scanf("%d", &a.idade);

    p = &a;

    printf("SEU NOME EH: %s\n", p->nome);
    printf("SUA IDADE EH: %d\n", p->idade);

    return 0;
}