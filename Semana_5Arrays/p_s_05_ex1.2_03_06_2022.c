#include<stdio.h>

int main(){

    int vet[10];
    int i;
    int cont2 = 0, cont3 = 0, cont5 = 0;
    //entrada de informaçao
    printf("Digite 10 caracteres:\n");
    for(i = 0; i < 10; i++){
        do{
        printf("Digite o valor %d\n", i);
        scanf("%d", &vet[i]);
        }while(vet[i] < 0 || vet[i] > 9);
    }
    //contagem
    for(i = 0; i<10; i++){
        switch(vet[i]){

        case 2: cont2++;
            break;
        case 3: cont3++;
            break;
        case 5: cont5++;
            break;
        default: break;
        }
    }
    printf("A quantidade de 2: %d\n", cont2);
    printf("A quantidade de 3: %d\n", cont3);
    printf("A quantidade de 5: %d\n", cont5);

    return 0;
}


