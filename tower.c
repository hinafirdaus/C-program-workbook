#include<stdio.h>
#include<stdlib.h>

int hanoi_tower(int, char,char,char);

int main()
{
    int stick;
    printf("How many rows: ");
    scanf("%d", &stick);
    hanoi_tower(stick, 'a', 'b','c');
    return 0;
}

int hanoi_tower(int n, char first, char second, char third)
{
    if(n==0)
    {
     printf("%c\t", first, "%c\n", second);
     return;
    }
        hanoi_tower(n-1, first, third, second);
        printf("\n%d\t", n,"%c\t", first, "%c\n", second);
        hanoi_tower(n-1, third, second, first);
}
