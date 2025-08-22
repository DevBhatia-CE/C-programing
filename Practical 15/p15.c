#include<stdio.h>
int main()
{
int sec,i;
printf("Enter the number of seconds to set a timer:");
scanf("%d",&sec);
if(sec>=0)
{
    i=sec;
    while(i>=0)
    {
        printf("%d\a\n",i);
        sleep(1);
        i--;
    }
}
else
{
    printf("You can not enter the negative number");
}
printf("Time Completed!!");
return 0;
}
