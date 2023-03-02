#include<stdio.h>

int main()
{
    int i;
    char vet[200];

    printf("Digite uma palavra: ");
    gets(vet);
    fflush(stdin);

    for(i=0;vet[i]!='\0';i++)
    {
        if(vet[i]!='a'&&vet[i]!='e'&&vet[i]!='i'&&vet[i]!='o'&&vet[i]!='u')
        {
            printf("%c",vet[i]);
        }
    }

    return 0;
}