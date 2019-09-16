#include<stdio.h>

int main()
{
    int a[4]={300,301,302,303};
    int *b=a;
    char *c=a;
    float *d=a;
    printf("%d", *b);
    printf("\n%d\t%d\t%d",*c, c, c+1);
    //printf("\n%d", *d);
    void *e=a;
    printf("%d", *e);
}
