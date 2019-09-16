#include<stdio.h>

int f(int);
int g(int);
int main()
{
    int x=10, y=20, i=1;
    for(i=1; i<=2; i++)
    {
        y+=g(x)+f(x);
        printf("%d\n", y);
    }
}

int f(int x)
{
    int y;
    y=g(x);
    return(y);
}

int g(int x)
{
    static int y;
    y+=3;
    return (x+y);
}
