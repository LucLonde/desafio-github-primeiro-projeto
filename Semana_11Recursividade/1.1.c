#include<stdio.h>
#include<stdlib.h>

void imprime(int n)
{
    printf("\n\t%d\n", n);
    if(n == 10)
    {
        return n;
    }
    else
    { 
        return imprime(n+1);
    }   
}
int main()
{
    imprime(1);
    system("pause");
    return 0;
}
