#include<stdio.h>
int main()
{
    int age,fair,discountedFair;
    fair = 200;
    discountedFair = fair - fair*20/100;
    printf("Enter the value of Age:");
    scanf("%d",&age);
    if (age<12)
    {
        printf("You are eligible for free entry");
    }
    else if (age>=12 & age<60)
    {
        int no_people;
        printf("Enter the number of people with age in range between 12 to 60:");
        scanf("%d",&no_people);
        printf("You have to pay the Fair of Ruppees %d",fair*no_people);
    }
    else
    {
        printf("You have to pay = %d Ruppees",discountedFair);
    }
    return 0;
}
