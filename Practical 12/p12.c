#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=50; i++)
    {
        if(i%5==0) printf("Book Id:%d(Special Edition)\n",i);
        else printf("Book Id: %d\n",i);
    }
    printf("The program is made by Dev Bhatia");
    return 0;
}
