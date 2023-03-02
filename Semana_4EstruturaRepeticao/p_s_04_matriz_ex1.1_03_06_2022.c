int main(){

    int mat[5][5];
    int i, j;

    printf("Digite os valores da mtriz:\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("diagonal principal:\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i == j){
                printf("%d", mat[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}
