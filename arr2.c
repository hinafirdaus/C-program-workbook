#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10],i, sum=0;
    for(i=0;i<=9;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<=9;i++)
    {
        sum = sum+a[i];
    }
    printf("\n%d", sum);
}
