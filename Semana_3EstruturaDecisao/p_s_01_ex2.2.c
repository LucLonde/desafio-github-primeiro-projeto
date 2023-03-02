
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3, media;

    printf("Digite tres notas com valores reais:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    media=(n1+n2+n3)/3;

    printf("A media aritmetica das notas eh: %.2f\n", media);

    return 0;
}
