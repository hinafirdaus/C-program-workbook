#include<stdio.h>

int main()
{
    char a[10];
    char *b="hello";
    int i, length = strlen(b);
    for(i=0;i<length;i++)
    {
        a[i]=b[length-i];
    }
    printf("%s", a);
}
