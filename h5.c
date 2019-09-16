#include<stdio.h>
#include<string.h>

int main()
{
char a[10];
char *b="hello";
int i, length = strlen(b);
for(i=1;i<=length;i++)
{
    a[i]=b[length-i];
}
printf("%s",a+1);
}
