#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n=2;
    Towerhanoi(n, 'A','C','B');
    return 0;
}

void Towerhanoi(int n, char source, char dest, char spare)
{
    if(n==1)
    {
        printf("Disk 1 move from %c to %c\n",source, dest);
        return;
    }

Towerhanoi(n-1, source, spare, dest);

printf("Disk %d  from %c to %c\n", n, source,dest);
Towerhanoi(n-1, spare, dest, source);
}
