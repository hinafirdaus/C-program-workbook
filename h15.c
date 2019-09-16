#include<stdio.h>
/*
int main()

{
    int a=10;
    int *b=&a;
   // printf(a*b);
   printf("%d", a**b);
}
*/

int main()
{
    int a=10;
    int *b=&a;
    int **c=&b;
    printf("%d %d %d %d", sizeof(c), sizeof(*c), sizeof(**c), sizeof(a));
}
