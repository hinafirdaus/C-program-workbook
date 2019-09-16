#include<stdio.h>

int main()
{
    int b[]={50,60,90,80,20,30};
    int *c[]={b+2, b, b+1, b+3, b+4, b+5};
    int **a=c;
    ++*++*++a;
    printf("%d, %d, %d\n", *a-b, a-c, *++*a+3);
    ++*++*(a+2);
    printf("%d, %d\n", *a-b, *((*++a)+3));
}
