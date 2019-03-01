/**Two numbers are entered through the keyboard. WAP to find the value of one number raised to the power of another*/

#include<stdio.h>
//#include<math.h>

int main(){
int n1,n2,p,i;
printf("Enter two numbers\n");
scanf("%d %d", &n1, &n2);
p=n1;
for(i=1; i<n2;i++){
    p=p*n1;
}
printf("\n %d", p);
return 0;
}
