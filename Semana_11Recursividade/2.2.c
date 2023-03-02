#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void vogaisCrescente(char *letra, int i, int n)
{
    if(i == n) return;
        
    else
    {
        vogaisCrescente(letra, i + 1, n);
        printf("%c", letra[i]);
    }
    
}

int main()
{
    char letra[30];
    gets(letra);
    vogaisCrescente(letra, 0, (letra) + 1);

    return 0;
}