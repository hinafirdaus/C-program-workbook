/*WAP to receive an integer and find its octal equivalent*/

#include<stdio.h>

int main(){
    int n,d,r,d1,r1;
    printf("Enter a decimal number to convert into octal number:\n");
    scanf("%d", &n);

do{   d=n/8;
    r=n%8;
    if(d>=8){
        d1=d/8;
        r1=d%8;
        printf("\noctal is %d%d%d", d1,r1,r);
    }
    else{
        d1=d;
        r1=r;
        printf("\nOctal is %d%d",d1,r1);
    }
}while(n==0);
return 0;
}
