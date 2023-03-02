#include<stdio.h>

int main()
{
    int i,c1=0,c2=0;
    char vet[50];

    printf("Digite uma palavra: ");
    gets(vet);
    fflush(stdin);

    for(i=0;vet[i]!='\0';i++)
    {
        if(vet[i]!='a'&&vet[i]!='e'&&vet[i]!='i'&&vet[i]!='o'&&vet[i]!='u'&&vet[i]!=' ')
        {
            c2=c2+1;
        }
        else
        {
            c1=c1+1;
        }
    }
    printf("Vogais: %d\nConsoantes: %d\n", c1, c2);

    return 0;
}