#include<stdio.h>

int main()
{
    int i, tam;
    char vet[50];

    printf("Digite uma palavra: ");
    gets(vet);

    for (i = 0;i < 50; i++)
    {
        if (vet[i]!='\0')
        {
            tam++;
        }
        
    }
    printf("%d", tam);

    return 0;
}