#include<stdio.h>

int main()
{
    int i;
    for(i=1;i<=25;i++)
    {
        switch(i)
        {
            default: i+=3;
            case 1: i+=3;
            case 2: i+=5;
            case 3: i+=4;

        }
        printf("%d\t",i);
    }
}
