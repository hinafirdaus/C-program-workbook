#include<stdio.h>

int i=5, j=7;

int f(int *, int *);

int main()
{
    f(&i, &j);
    printf("%d %d", i, j);
}

int f(int *j, int *i)
{
    *i=*j+3;
    *j=*i+7;
    i=j;
    *j=*i+3;
    *i=*j-5;
}
