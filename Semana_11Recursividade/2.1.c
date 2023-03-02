#include<stdio.h>
#include<stdlib.h>

void imprime(int n)
{
    printf("\n\t%d\n", n);
    if(n == 1)
    {
        return n;
    }
    else
    { 
        return imprime(n-1);
    }   
}
int main()
{
    imprime(10);
    system("pause");
    return 0;
}
