#include <stdio.h>

int main() {
    int mat[4][4];
    int x, y;
    
    for(x=0; x<4; x++){
        for(y=0; y<4; y++){
            printf("Digite o valor da posiçao mat[%d][%d]:", x,y);
            scanf("%d", &mat[x][y]);
            printf("\n");
        }
    }
    for(x=0; x<4; x++){
        for(y=0; y<4; y++){
            printf("%d", mat[x][y]);
        }     
        printf("\n");
    }
    printf("Numeros pares:\n");
    for(x=0; x<4; x++){
        for(y=0; y<4; y++){
            if(mat[x][y]%2==0){
                printf("mat[%d][%d] = %d\n",x,y, mat[x][y]);
            }
        }
    }
    
    
   
    return 0;
}