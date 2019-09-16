#include<stdio.h>

int main()
{
    static int val;
    if(--val)
    {
        main();
        printf("%d", val);
    }
}
