#include<stdio.h>
int main()
{
    int i,positive=0,negative=0,odd=0,even=0,num[25];
    for (i=0;i<25;i++)
    {
        printf("Enter Value Number %d : ",i+1);
        scanf("%d",&num[i]);
        if(num[i]>0)
        {
            positive++;
        }
        if(num[i]<0)
        {
            negative++;
        }
        if(num[i]%2==0)
        {
            even++;
        }
        if(num[i]%2!=0)
        {
            odd++;
        }
    }
    printf("Total Number of Positive numbers = %d\n",positive);
    printf("Total Number of Negative numbers = %d\n",negative);
    printf("Total Number of Even numbers = %d\n",even);
    printf("Total Number of Odd numbers = %d\n",odd);
    printf("This program is made by Dev Bhatia.");
    return 0;
}
