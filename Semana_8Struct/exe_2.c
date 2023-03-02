#include<stdio.h>
#include<stdlib.h>

/*Crie um programa em C que defina uma struct para representar um tipo Funcionario 
contendo nome(string) e salario (valor real).

Permita o usuário digitar um valor inteiro N, e alocar dinamicamente um vetor para 
comportar N Funcionarios.

Defina uma função, for a da main, com o objetivo de preencher as informações dos 
N Funcionarios. Chame esse função dentro da main para preencher o vetor alocado.

Defina também uma função, for a da main, com o objetivo de imprimir as informações dos 
N Funcionarios. Chame esse função dentro da main para imprimir o vetor alocado.

Por fim, defina uma função que mostre as informações (Nome e Salario) do funcionário 
do vetor que possui o maior salário.

Desaloque o vetor criado ao final do programa.*/
typedef struct sFuncionario
{
    char nome[255];
    float salario;    
}Funcionario;

int main()
{
    Funcionario *funcionario;
    int NumFuncionarios;

    printf("Digite a quantidade de funcionarios:\n");
    scanf("%d", &NumFuncionarios);
    funcionario = (int *) malloc(NumFuncionarios*sizeof(int));
    for (i = 0; i < NumFuncionarios; i++)
    {
        printf("Nome:\n");
        gets(funcionario[i]);

        printf("Salario:\n");
        scanf("%f", *funcionario[i]);
    }
    system ("pause");
    return 0;
}
