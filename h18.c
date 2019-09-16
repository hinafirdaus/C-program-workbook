#include<stdio.h>

int p(int *);
int q(int);
int x;

int main()
{
    x=5;
    p(&x);
    printf("%d\n", x);
}

int p(int *y)
{
    int x=*y+2;
    q(x);
    *y=x-1;
    printf("%d\n", x);
}

int q(int z)
{
    z+=x;
    printf("%d\n", z);
}
