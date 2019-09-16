#include<stdio.h>

int main()
{
    int a=500;
    char *b=(char*)&a;
    b++;
    *b=2;
    printf("%d", a);
}
