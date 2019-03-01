/*WAP to enter numbers till the user wants. At the end it should display the count of positive, negative and zero entered*/

#include<stdio.h>

int main(){
int p=0,n=0 ,z=0,j;
char ch;
printf("Enter the number containing positive, negative and zero in it\n If you want to exit typing enter (n)\n");
do{
        printf("\nEnter a number of your choice\n");
        scanf("%d", &j);

    if(j>0){
        p=p+1;
printf("\nCount of positive numbers are: %d\n", p);
    }
    if(j<0){
        n=n+1;
        printf("\nCount of negative number: %d\n",n);
    }
    if(j==0){
        z=z+1;
        printf("\nCount of zero's are: %d\n",z);
    }
printf("\nFor continuation press 'y' or else 'n'\n");
scanf("%c",&ch);
ch=getchar();
}while(ch=='y');
printf("\nCount of Positive:%d,  Negative: %d, Zero:%d\n",p,n,z);
return 0;
}
