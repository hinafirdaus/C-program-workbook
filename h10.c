#include<stdio.h>

int a=5;

int main()
{
    extern int a;
    printf("%d\n",a);
    a=10;
    printf("%d", a);
}
