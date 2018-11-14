#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int *b)
{
    *a^=*b;
    *b^=*a;
    *a^=*b;
}
int main()
{
    int* n = (int*)malloc(128);
    scanf("%d %d %d %d",n,n+1,n+2,n+3);
    int i, j;
    for (i = 0; i < 3; i++)
    {
        int min = i;
        for (j=i+1;j<4;j++) if (*(n+min)>*(n+j)) min=j;
        if (i!=min) swap(n+i,n+min);
    }
    printf("%d \n", *n**(n+2));
    free(n);
    return 0;
}