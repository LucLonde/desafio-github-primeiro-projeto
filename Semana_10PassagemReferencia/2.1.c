#include <stdio.h>

int main()
{
    int n;
    int *p1, *p2;

    printf ("DIGITE UM NUMERO:");
    scanf("%d", &n);

    p1 = &n;
    p2 = p1;

    printf("\n p2 = %d",*p2);

    return 0;
}