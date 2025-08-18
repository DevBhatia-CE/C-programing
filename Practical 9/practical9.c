#include<stdio.h>
void main()
{
    int amount;
    printf("Enter the total amount :");
    scanf("%d",&amount);
    printf("\nYour Total Amount is : %d Ruppees\n",amount);

    if (amount<=1000)
    {
        printf("Discount = 0 Ruppees");
        printf("\nFinal Amount after Discount is: %d Ruppees",amount);
    }
    else if (amount>1000 && amount<=5000)
    {
        printf("Discount = %d Ruppees",amount*10/100);
        printf("\nFinal Amount after Discount is: %d Ruppees",amount*(100-10)/100);
    }
    else
    {
        printf("Discount = %d Ruppees",amount*20/100);
        printf("\nFinal Amount after Discount is: %d Ruppees",amount*(100-20)/100);
    }
}
