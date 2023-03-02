#include<stdio.h>
#include<string.h>

int main()
{

    int i,igual=1;
    char vet1[20], vet2[20];

    printf("digite palavra 01\n");
    gets(vet1);
    fflush(stdin);
    printf("digite a palavra 02\n");
    gets(vet2);
    fflush(stdin);

    if(strcmp(vet1, vet2)==0)
    {
        puts("\nIguais");
    }
    else
    {
        puts("\nDiferentes");   
    }
    return 0;
}