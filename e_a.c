/*WAP to print all prime numbers from  1 to 300.*/

#include<stdio.h>

int main(){
int i;
printf("1\n");
for(i=2;i<=300;i++){
    if(i%2==0)
        continue;
    else
        printf("%d\n",i);
}
return 0;
}
