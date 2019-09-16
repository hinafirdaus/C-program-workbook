#include<stdio.h>

int main()
{
    struct node
    {
        int a;
        float b;
        char c;
    };

    struct node d={10,20.5, 'a'};
    printf("%d\n", d.a);
    printf("%f\n", d.b);
    printf("%u\n",&d);
    printf("%d\n", d.c);

    struct node *e=&d;
    printf("%f\n", (*e).b);
    printf("%d\n", (*e).a);
    printf("%d", e+1);
    printf("%d\n", (*e).c);

}
