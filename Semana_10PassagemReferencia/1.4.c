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
    scanf("%d", &pf->idade);
    printf("\nDIGITE O SALARIO: ");
    scanf("%f", &pf->salario);
}

void imprime(funcionario *pf)
{
    printf("\nFUNCIONARIO A:\n");
    printf("NOME:%s\nIDADE:%d\nSALARIO: %.2f\n\n", pf->nome, pf->idade, pf->salario);
}

void maisnovo(funcionario *vet, int n)
{
     int cont;
     int menor= 999;
     int idmenor= 0;

     for(cont=0; cont<n; cont++)
     {
        if(vet[cont].idade<menor)
        {
            menor= vet[cont].idade;
            idmenor=cont;
        }
     }

     printf("O FUNCIONARIO MAIS NOVO DA TURMA EH:");
     imprime(&vet[idmenor]);
}

void maiorsalario(funcionario *vet, int n)
{
     int cont;
     int maior= 0;
     int idmaior= 0;

     for(cont=0; cont<n; cont++)
     {
        if(vet[cont].salario>maior)
        {
            maior= vet[cont].salario;
            idmaior=cont;
        }
     }

     printf("O MAIOR SALARIO DA TURMA EH:");
     imprime(&vet[idmaior]);

}

int main()
{

    funcionario vet[5];
    int cont;

    for(cont=0;cont<5;cont++)
    {
        digita(&vet[cont]);
    }
    for(cont=0;cont<5;cont++)
    {
        imprime(&vet[cont]);
    }

    maisnovo(vet,5);
    maiorsalario(vet,5);

    return 0;
}