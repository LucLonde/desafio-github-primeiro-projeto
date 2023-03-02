#include<stdio.h>
#include<stdlib.h>

int soma(int n)
{
    if(n == 0)
        return 0; 
    else
        return n + soma(n-1);
}

int main()
{
    int num;
    printf("\nDigite um numero: ");
    scanf("%d", &num);
    printf("A soma de N eh: %d\n", soma(num));
    
    system("pause");
    return 0;
}
