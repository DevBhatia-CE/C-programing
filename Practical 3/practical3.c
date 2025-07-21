#include<stdio.h>
int main()
{
float weight,height,bmi;
printf("Enter the value of your Height(in meters):");
scanf("%f",&height);
printf("\nEnter the value of your Weight(in Kilograms):");
scanf("%f",&weight);
bmi = weight/(height*height) ;
printf("\nYour BMI with Height %f meters and Weight %f kilograms is: %f \n",height,weight,bmi);
printf("This program is made by Dev Bhatia from Computer Engineering");
return 0;
}
