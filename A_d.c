#include<stdio.h>
int main(){
//A_d
/*int x=4, y=3, z;
z= x-- - y;
printf("%d %d %d", x,y,z);
return 0;*/

//A_e
/*while('a'<'b')
    printf("Malyalam is palindrome");
return 0;*/

//A_f
/*int i;
while(i=10){
    printf("%d\n",i);
    i=i+1;
}
return 0;*/

//A_g
//Because of float the while loop is not showing any o/p if we use int instead of float the while loop with same program will execute till statement in right
/*float x=1.1;
while(x==1.1){
    printf("%f\n",x);
    x=x-0.1;
}
return 0;*/

//A_h
/*int x=4, y=0,z;
while(x>=0){

x--;
y++;
if(x==y)
    continue;
else
    printf("\n %d %d", x,y);
}
return 0; */

int x=4, y=0, z;
while(x >=0){
    if(x==y)
        break;
    else
        printf("\n %d %d", x,y);
    x--;
    y++;
}
return 0;
}
