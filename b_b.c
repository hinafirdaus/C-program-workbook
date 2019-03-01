/*WAP to find the factorial value of any number entered through the keyb*/

#include<stdio.h>
int main(){
int n, fact=1;
printf("Enter a number to find the factorial\n");
scanf("%d", &n);

while(n>=1){
    fact=fact*n;
    n--;
}
printf("\nThe factorial is %d", fact);
return 0;
}
