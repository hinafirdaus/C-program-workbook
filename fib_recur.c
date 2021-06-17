#include<stdio.h>
#include<stdlib.h>

int fib(int);

int main()
{
    int m;
    printf("Enter the number till you want the fibonaci series: ");
    scanf("%d", &m);
    printf("0, 1,");
    fib(m-2);
}

int fib(int m)
{
    int n1=0, n2=1,n3;
    if(m>0)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d,", n3);
        fib(m-1);
    }
}
