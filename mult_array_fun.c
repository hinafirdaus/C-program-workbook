#include<stdio.h>

int mult(int a[]);

int main()
{
    int m[]={2,3,4,5,6}, res;
    res = mult(m);
    printf("Multiplication: %d", res);
}

int mult(int a[])
{
    int multiply=1, i;
    for(i=0; i<5;i++)
    {
        multiply =multiply*a[i];
    }
    return multiply;
}
