#include<stdio.h>
void main()
{
    int age;
    printf("Enter your age :");
    scanf("%d",&age);

    if (age<=0 )
    {
        printf("Please enter a valid age.");
    }
    else
    {
    if (age < 18)
    {
        printf("You are not eligeble to open a saving accounts.");
    }
    else if (age >= 18 && age <60)
    {printf("You are eligeble for opening a regular savings account");}
    else
    {printf("You are eligeble to open a Senoir citizen savings account");}
    }
    return 0;
}
