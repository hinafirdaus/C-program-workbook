#include<stdio.h>

int main(){
//a
/*int i=0;
for(;i;)
    printf("Here is some mail for you\n");
return 0;*/

//b
/*int i;
for(i=1;i<=5;printf("%d\n",i));
i++;
return 0; */

//c
int i=1, j=5;
for(;;){
    if(i>5)
        break;
    else
        j+=i;
    printf("%d\n", j);
    i+=j;
    return 0;
}
}
