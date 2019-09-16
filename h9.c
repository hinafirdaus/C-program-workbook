#include<stdio.h>

int f(int);

int main()
{
    long int n=4;
    printf("%d", f(n));
}

int f(int n)
{
    static int r=15;
    if(n<=1)
    {
        r=r+10;
        return(r-5);
    }
    if(n>3)
        return(r-f(n-2));
    else
        return(r+f(n-1));
}
