#include<stdio.h>

int c();
int d(int);
int e();

int a=1, b=2;

int main()
{
    auto int a=3;
    printf("%d\t%d\n",a,b);
    c();
    a=4, b=5;
    d(b);
    printf("%d\t%d\n", a,b);
}

int c()
{
    static int b=6;
    printf("%d\t%d\n", a,b);
    d(a);
    a=7, b=8;
}

int d(int a)
{
    extern int b;
    printf("%d\t%d\n", a,b);
    e();
    a=9, b=10;
}

int e()
{
    register int a=11;
    printf("%d\t%d\n", a,b);
    a=12, b=13;
}
