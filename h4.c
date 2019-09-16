#include<stdio.h>

int main()
{
    int a[6]={50,20,70,40,30,10};
    int *b[6]={a+3,a,a+2,a+4,a+5,a+1};
    int **c=b;
    *c++;
    printf("%d, %d, %d\n", c-b, *c-a, **c);
    *++*c;
    printf("%d, %d, %d\n", c-b, *c-a, **c);
    ++**c;
    printf("%d, %d, %d",c-b,*c-a,**c);
}
