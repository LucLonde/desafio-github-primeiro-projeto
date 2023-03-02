#include<stdio.h>

void fatorial(int num)
{
    
    int i, soma=1;

    for (i = 1; i <= num ; i++)
    {
        soma = i*soma;
    }
    printf("%d", soma);
}
int main()
{
    int num;

    scanf("%d", &num);

    fatorial(num);
    
    return 0;
}