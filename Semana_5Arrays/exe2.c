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

    for(i=0;vet1[i]!='\0'||vet2[i]!='\0';i++)
    {
        if(vet1[i]!=vet2[i])
        {
            igual=0;
            break;
        }
    }
    if(igual==0)
    {
        printf("nao");
    }

    else
    {
        printf("sim");   
    }

    return 0;
}