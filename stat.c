#include<stdio.h>
#include<stdlib.h>

int f1();

int fun()
{
static int count = 5;
count=count+1;
return count;
}

int main()
{
printf("%d ", fun());
printf("%d ", fun());
return 0;
}
