#include<stdio.h>

int main()
{
    int i=-1, j=-1, k=-1, l=2, m;
    m=((i++ && j++ && k++)|| (l++));
    printf("%d, %d, %d, %d, %d",i,j,k,l,m);
}
