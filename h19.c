#include<stdio.h>

int i=10, j=11;
int f(int *, int*);

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
    *i=*j-5;
}
