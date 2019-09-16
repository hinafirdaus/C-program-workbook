#include<stdio.h>

int f(int *, int);

int main()
{
    int a[6]={75,91,32,64,97,88};
    printf("%d", f(a,6));
}

int f(int *a, int n)
{
    if(n<=0)
        return 0;
    else
    {
        if(*a%2==0)
            return (*a-f(a+1, n-1));
        else
            return (*a+f(a+1, n-1));
    }
}
