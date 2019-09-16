#include<stdio.h>
int a =5;

int b();
int c();
int d();

int main(){
int a=10;
b();
printf("%d", a);

}

int b(){
//int a =20;
c();
}

int c()
{
    //int a =30;
    d();
}

int d()
{
    //int a =40;
    printf("%d", a);
}
