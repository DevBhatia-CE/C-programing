#include<stdio.h>
int main()
{
    int i,id[5],mid,n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    printf("Enter an id numbers present:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&id[i]);
    }
    for (i=0;i<n;i++)
    {
        if(id[i]==i)
        {

        }
        else
            printf("%d",i);
    }
    return 0;
}
