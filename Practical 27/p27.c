#include<stdio.h>
int fibbonaci(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    else{
        return fibbonaci(n-1)+fibbonaci(n-2);
    }
}
int main()
{
    int n,sum,res,i;
    printf("Enter number of months : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Month - %d -> %d rs\n",i,fibbonaci(i));
    }
    printf("This program is made by Dev Bhatia 25CE007");
    return 0;
}

