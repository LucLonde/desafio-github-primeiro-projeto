
#include<stdio.h>

int main(){

    char vet[10];
    int i;

    printf("Digite 10 caracteres: \n");
    for(i = 0; i < 10; i++){
        printf("Digite o vlaor %d\n", i);
        fflush(stdin);
        scanf("%c", &vet[i]);
    }
        printf("Os valores foram: ");
        for(i = 0; i < 10; i++){
            printf("%c ", vet[i]);
        }


}


