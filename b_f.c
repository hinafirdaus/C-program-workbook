/*WAP for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. Rules for the game
as follows:
--- there are 21 matchsticks
--- the computer asks the player to pick 1,2,3 or 4 matchsticks
--- after the person picks, the computer does its picking
--- whoever is forced to pick up the last matchstick loses the game*/

/*In actual computer is having 21 MS. Now user choose from 1 to 4 any one of the matchsticks. Computer plays with 5-user_i/p now the remaining matchsticks
can be calculated using MS-user_ip - computer_ip. This loop goes on until the matchstick becomes 1 or the last one to pick the left out matchstick will be the loser*/
#include<stdio.h>

int main(){
int u,c,iu,ic, ms=21;

printf("In this game of matchstick the rule is simple\n From the lot of 21 matchstick you the Human are playing against the computer. Try hard that you won't let computer wins");
printf("\n\nThe game starts now\n We are having 21 Matchsticks!!!\n Human You go first---\n\n");

/*Nested for loop is used for human and computer inputs in this game*/
for(ic=1; ic<=10;ic++){//outer loop to get computer input
for(iu=ic;iu<=ic;iu++){ //inner loop to get user input on matchstick
    printf("\nYou choose among 1,2,3, or 4 any one of the matchstick\n");
    scanf("%d", &u);
}//end of inner loop for human input

printf("\nYo! computer now you choose: \n");
c=5-u;  //this logic is developed as the maximum stick is entered to be 4. Hence 5 subtracting to user input number give a magical number which can ensure computer always wins
printf("\n Computer chose %d", c);
ms=ms-c-u;  // calculating the remaining matchstick from the total of user and computer input
/*This if loop ensures if the matchstick is 1 or less than one then it will be the chance of user to input and hence human will loose*/
if(ms==1 || ms<=4){
        printf("\nThe matchsticks are left are : %d\n",ms);
    printf("\nWhatever you enter You will loose :-(! \n\n ***Computer wins!!!\n");
break; // break is to come out of the for loop completely or it will keep on iterating for the remaining condition
}
else{
printf("\n\nThe remaining matchsticks are %d\n", ms);
}

}
return 0;
}
