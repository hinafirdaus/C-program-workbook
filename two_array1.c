#include<stdio.h>
#include<stdlib.h>

int main()
{
   // int a[3][2]={{10,12},{14,15},{18,20}};
   // printf("%d, %d",a[0][0], a[1][1]);
   int a[3][2],b[3][2], rows=0, cols=0;
   printf("Enter the elements for the A arrays: \n");
   for(rows=0;rows<3;rows++)
   {
       for(cols=0;cols<2; cols++)
       {
           scanf("%d", &a[rows][cols]);
       }
   }
 printf("\nEnter the elements for the B arrays: \n");
   for(rows=0;rows<3;rows++)
   {
       for(cols=0;cols<2; cols++)
       {
           scanf("%d", &b[rows][cols]);
       }
   }
    for(rows=0;rows<3;rows++)
   {
       for(cols=0;cols<2; cols++)
       {
           printf("%d ", a[rows][cols]+b[rows][cols]);
       }
       printf(" \n");
   }

}
