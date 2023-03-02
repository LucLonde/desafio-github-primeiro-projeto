#include<stdio.h>
#include<stdlib.h>

int main()
{
int num;
printf("Digite o numero:\n");
scanf("%d", &num);

if(num % 2 == 0){
printf("%d eh par", num);
}
else{
printf("%d eh impar", num);
}
return 0;
}