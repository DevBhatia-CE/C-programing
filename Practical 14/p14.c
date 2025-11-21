#include<stdio.h>
int main()
{
    int x,amt=5000;
    printf("Total amount = %d\n",amt);
    printf("Enter the amount to be withdrawed : ");
    scanf("%d",&x);
    if (amt<x)
    {
        printf("Insufficient Balance\n");
    }
    else{
        amt= amt-x;
        printf("Final amount after withdrawal = %d\n",amt);
    }
    printf("This program is made by Dev Bhatia (25CE007)");
    return 0;
}
