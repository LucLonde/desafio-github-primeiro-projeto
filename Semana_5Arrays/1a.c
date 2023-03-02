#include<stdio.h>
#include<string.h>

int main()
{
    int i, tam;
    char vet[50];

    printf("Digite uma palavra: ");
    fflush(stdin);
    gets(vet);
    fflush(stdin);

    tam=strlen(vet);

    printf("%d", tam);

    return 0;
}