#include<stdio.h>

int main(){

    int vet[10];
    int i, par = 0, impar = 0;

    printf("\t>>>Digite 10 valores<<<\t\n\n\n");

    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor %d: ", i);
        scanf("%d", &vet[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (vet[i] % 2 == 0){
            par++;     
        }
        else{
            impar++;  
        }   
    }
        printf("Pares: %d\n", par);
        printf("Impares: %d\n", impar);
    
    return 0;    
}