#include <stdio.h>


int main()
{
    int n;
    int *pn;

    n=6;

    pn = &n;

    printf("%d", *pn);

    return 0;

}