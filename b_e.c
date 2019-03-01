/*WAP to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an armstrong number*/

#include<stdio.h>

int main(){
int i,a,j,k,l,m,n,p;

printf("Armstrong of each number between 1 to 500 are:\n");

for(i=1; i<=500;i++){
//to check single digit numbers armstrong values
if(i<10){
    a= i*i*i;
    printf("%d----->%d\n",i,a);
    continue;
}

// to check double digit number armstrong values
else if(i>=10 && i<100){
    j=i%10;
    k=i/10;
    a= (j*j*j) + (k*k*k);
    printf("\n%d----->%d",i,a);
    continue;
}
//to check triple digit number armstrong values
else if(i>=100 && i<=500){
    l=i/100;
    m=i%100;
    n=m/10;
    p=m%10;
    a= (l*l*l) + (n*n*n) + (p*p*p);
    printf("\n%d---->%d",i,a);
}
}
return 0;
}
