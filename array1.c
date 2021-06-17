//address of array stored in C
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5],i, index;
    printf("I store the elements in:");
    for(i=0;i<=4;i++)
    {
        printf("\n%p",&a[i]);
    }
    printf("The array A is storing elements inside it so please enter:\n");
    for(index=0;index<=4;index++)
    {
        scanf("%d", &a[index]);
    }
    printf("\nFinal elements in the array list are: ");
    for(index=0;index<=4;index++)
    {
        printf("\n%d", a[index]);
    }

}
