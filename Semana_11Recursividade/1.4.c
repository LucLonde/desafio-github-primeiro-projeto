#include<stdio.h>
#include<string.h>
int maior(int *vet, int n)
{
    if(n == 0)
        return vet[0];
    else
    {
        int maiorAux = maior(vet, n-1);

        if(vet[n]> maiorAux)
            return vet[n];
        else
            return maiorAux;
    }
}

int main()
{
    int vet[10];
    int aux = maior(vet, 4);
    printf("%d", maior);

    return 0;
}
