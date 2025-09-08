#include<stdio.h>
#include<math.h>
int main()
{
 float marks;
 printf("Enter your marks:");
 scanf("%f",&marks);
 marks=round(marks);
 printf("You have entered: %.2f\n",marks);
 (marks<=100 && marks>=90)?printf("Grade A"):(marks>=80 && marks<90)?printf("Grade B"):
     (marks>=70 && marks<80)?printf("Grade C"):(marks>=60 && marks<70)?printf("Grade D"):
         (marks>=0 && marks<60)?printf("Grade F"):printf("Invalid Marks");
         printf("\nThe program is made by Dev Bhatia");
 return 0;
}
