#include<stdio.h>
int main()
{
    int matchstick,user,n=21;
    printf("There are total 21 matchsticks\n");
    printf("The last one to pick the Matchstick looses the game\n");
    printf("Rules:you can choose the matchstick between 1 to 4\n");
    printf("The game starts\n");
    while(n>1)
    {
        printf("Your turn\nEnter the number of matchsticks you want to pick:");
        scanf("%d",&user);
        if(user>=1 && user<=4)
        {
            printf("You choose %d matchstick\n",user);
            printf("Computer's turn....\n");
            sleep(1);
            matchstick= 5 - user;
            printf("Computer choose %d matchstick\n",matchstick);
            n=n-5;

            printf("The total number of matchsticks left = %d\n",n);
        }
        else
            {
                printf(" Please ENTER the number between 1 to 4\n");
        }

    }
    printf("You have to pick the last matchstick\n");
    printf("You lost the game\n");
    printf("This game is made by Dev Bhatia.");
    return 0;
}
