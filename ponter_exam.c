#include<stdio.h>
int main()
{
    int a=10;
    int *b=&a;
    int **c = &b;
    printf("a : %d, &a: %p\n", a, &a);
    printf("b: %p, &b: %p, *b: %d\n", b, &b, *b);
    printf("c: %p, **c: %p, **c: %d", &c, &b, **c);
}
