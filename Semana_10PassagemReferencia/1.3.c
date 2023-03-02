#include <stdio.h>

typedef struct sFuncionario 
{
    char nome[25];
    int idade;
    float salario;
}funcionario;

void digita(funcionario *pf)
{

    printf("DIGITE O NOME DO FUNCIONARIO:");
    fflush(stdin);
    gets(pf->nome);
    fflush(stdin);
    printf("\nDIGITE A IDADE:");
    scanf("%d",&pf->idade);
    printf("\nDIGITE O SALARIO: ");
    scanf("%f", &pf->salario);
}

void imprime(funcionario *pf)
{
    printf("\nFUNCIONARIO A:\n");
    printf("NOME:%s\nIDADE:%d\nSALARIO: %.2f\n\n", pf->nome, pf->idade, pf->salario);
}

int main()
{
    funcionario a, b;
    funcionario *pf;

    digita(&a);
    digita(&b);

    imprime(&a);
    imprime(&b);

    return 0;
}