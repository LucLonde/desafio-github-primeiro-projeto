#include<stdio.h>

void soma(int num)
{
    int i, soma=0;

    for (i = 1; i <= num; i++)
    {
        soma = i+soma;
    }
    printf("%d", soma);
}
int main()
{
    int num;

    scanf("%d", &num);

    soma(num);
    
    return 0;
}