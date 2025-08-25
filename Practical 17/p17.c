#include<stdio.h>
int main()
{
    int time;
    float distance;
    while(1)
    {
        if(distance<=10)
        {
            printf("Minute %d: Distance covered = %.2f km\n",time,distance);
            time++;
            distance = distance + 0.5;

        }
        else
        {
            printf("Marathon Completed");
            break;
        }
    }
return 0;
}
