#include<stdio.h>

int a=1, b=2;
int c();
int d();
int e();


int main()
{
    int a=5, b=7;
    c();
    printf("%d %d", a,b);
    d(a);
    printf("%d %d", a,b);

}

int c()
{
    b=9;
    printf("%d %d", a,b);
    d(a);
    a=11,b=13;
}

int d(int b)
{
    printf("%d %d", a,b);
    e(a,b);
    a=21, b=22;
}

int e(int b, int a)
{
    printf("%d %d", a,b);
    a=33, b=34;
}
