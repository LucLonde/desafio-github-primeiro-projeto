
#include<stdio.h>

int main(){

    int vet[10];
    int i;

    printf("Digite 10 valores inteiros:\n");
    for(i = 0; i < 10; i++){
        printf("Digite o vlaor %d\n", i);
        scanf("%d", &vet[i]);
    }
        printf("Os valores foram: ");
        for(i = 0; i < 10; i++){
            printf("%d ", vet[i]);
        }
        printf("\n");

}


