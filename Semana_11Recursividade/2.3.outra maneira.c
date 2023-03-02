#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimeVogais(char *p, int i)
{
    if (p[i] == 0) 
        return 0;

    imprimeVogais(p, i + 1);

    if (p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u')
        printf("%c", p[i]);  
}
int main()
{
    char vogais[10];
    fgets(vogais, 10, stdin);
    imprimeVogais(vogais, 0);
    printf("\n");
    system("pause");
    return 0;
}