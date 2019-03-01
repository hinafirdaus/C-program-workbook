/*WAP to print all the ASCII values and their equivalent characters using a while loop. The ASCII values vary from 0 to 255*/

#include<stdio.h>

int main(){
int i=0;
printf("ASCII Characters between 0 to 255 are:\n");
while(i<=255){
printf("%c---> %d\n",i,i);
i++;
}
return 0;
}
