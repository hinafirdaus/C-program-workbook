#include<stdio.h>
#include<string.h>

int main()
{
    char *a[]={"stupid","chacha","ayyooo", "break","baccha","party"};
    char **b[]={a+2, a+1, a, a+3, a+5, a+4};
    char ***c=b;
    **++*c;
    printf("%s\n", *++*(c+2)+2);
    printf("%s\n", *++*++c-1);
    printf("%c", ++*++**(c+10));
}
