#include<stdio.h>
#include<math.h>
float area(float x,float y,float z)
{
    float s,A;
    s=(x+y+z)/2;
    A=sqrt(s*(s-x)*(s-y)*(s-z));
    return A;
}
void valid(float a,float b, float c)
{
    if(a>=0 && b>=0 && c>=0)
    {

        if((a+b)>c && (b+c)>a && (a+c)>b )
        {
            printf("Valid : Yes ");
            float A = area(a,b,c);
            printf(" Area = %f",A);
            return;
        }
        else
        {
            printf("Valid : No Message : The given lengths do not form a valid triangle");
            return;
        }
    }
    else
    {
        printf("Valid : No Message : Side of length of triangle should always be positive");
        return;
    }
}
int main()
{
    float a,b,c;
    printf("Enter Three side of triangles : ");
    scanf("%f %f %f",&a,&b,&c);
    valid(a,b,c);
    return 0;
}

