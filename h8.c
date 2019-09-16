#include<stdio.h>

int main()
{
    static int val=5;
    if(val--)
    {
        main();
        printf("%d\t",val--);
    }
}
