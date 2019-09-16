#include<stdio.h>

int main()
{
    int a[5][3]={10,20,30,40,50,60,70,80,90,100,110,120,130,140,150};
    printf("%u, %u\n", a+3, *a+3);
    printf("%d,%d\n", *(a+2)+5, a[3]+10);
    printf("%d, %d\n", **a+2, *a[3]+7);
    printf("%d", ((a==a[0]) && (*a==a[0])));
}
