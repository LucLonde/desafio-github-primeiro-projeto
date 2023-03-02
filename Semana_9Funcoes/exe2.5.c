#include<stdio.h>

typedef struct 
{
    char nome[30];
    float altura, peso;
}Pessoa;

void imc(Pessoa p)
{
    float imc;

    imc = p.peso/(p.altura*p.altura);

    printf("A pessoa %s possui IMC igual a >%.2f<\n", p.nome, imc);
}

int main()
{
    Pessoa pes[100];

    int i;
    for (i = 0; i < 100; i++)
    {
        printf("Digite o nome da %d: ", i+1);
        fflush(stdin);
        gets(pes[i].nome);
        fflush(stdin);

        printf("Altura da pessoa %d: ", i+1);
        scanf("%f", &pes[i].altura);

        printf("Peso da pessoa %d: ", i+1);
        scanf("%f", &pes[i].peso);
    }

    for (i = 0; i < 100; i++)
    {
        imc(pes[i]);
    }

    return 0;
}