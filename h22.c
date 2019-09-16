#include<stdio.h>

int main()
{
    int a[5][7][2];
    printf("%u\n", *(*(a+2)+3+2)+10);
    printf("%u\n", *a[3]+7);
    printf("%u\n", **a+19);
    printf("%u\n", **((a+2)+3)+4);
}

