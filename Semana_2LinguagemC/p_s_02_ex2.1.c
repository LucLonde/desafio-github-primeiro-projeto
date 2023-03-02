#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n1, n2;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2)
    {
        if (n1 % 2 == 0 && n2 % 2 == 0)
        {
            printf("%d eh maior e par \n %d eh menor e par\n", n1, n2);
        }
        else if (n1 % 2 == 0 && n2 % 2 != 0)
        {
            printf("%d eh maior e par \n %d eh menor e impar\n", n1, n2);
        }
        else if (n1 % 2 != 0 && n2 % 2 != 0)
        {
            printf("%d eh maior e impar \n %d eh menor e impar\n", n1, n2);
        }
        else if (n1 % 2 != 0 && n2 % 2 == 0)
        {
            printf("%d eh maior e impar \n %d eh menor e par\n", n1, n2);
        }
    }
    if (n1 < n2)
    {
        if (n1 % 2 == 0 && n2 % 2 == 0)
        {
            printf("%d eh maior e par \n %d eh menor e par\n", n1, n2);
        }
        else if (n1 % 2 == 0 && n2 % 2 != 0)
        {
            printf("%d eh maior e par \n %d eh menor e impar\n", n1, n2);
        }
        else if (n1 % 2 != 0 && n2 % 2 != 0)
        {
            printf("%d eh maior e impar \n %d eh menor e impar\n", n1, n2);
        }
        else if (n1 % 2 != 0 && n2 % 2 == 0)
        {
            printf("%d eh maior e impar \n %d eh menor e par\n", n1, n2);
        }
    }
    if (n1 == n2)
    {
        if (n1 % 2 == 0 && n2 % 2 == 0)
        {
            printf("%d e %d sao par e iguais\n ", n1, n2);
        }
        else if (n1 % 2 != 0 && n2 % 2 != 0)
        {
            printf("%d e %d sao impares e iguais \n", n1, n2);
        }
    }
        return 0;
}