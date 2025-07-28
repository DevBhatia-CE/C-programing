#include<stdio.h>
#include<limits.h>
#include<float.h>
void main()
{
    printf("The size of integer is %zu",sizeof(int));
    printf("\nThe range of integer is from %d to %d",INT_MIN,INT_MAX);
    printf("\nThe size of Character is %zu",sizeof(char));
    printf("\nThe range of Character is from %d to %d",CHAR_MIN,CHAR_MAX);
    printf("\nThe size of Float is %zu",sizeof(float));
    printf("\nThe range of Float is from %e to %e",FLT_MIN,FLT_MAX);
    printf("\nThe size of Unsigned Integer is %zu",sizeof(unsigned int));
    printf("\nThe range of Float is from %0 to %u",ULONG_MAX);
    printf("\nThe size of Long is %zu",sizeof(long));
    printf("\nThe range of Long is from %ld to %ld",LONG_MIN,LONG_MAX);
    printf("\nThe size of long long is %zu",sizeof(long long));
    printf("\nThe range of long long is from %lld to %lld",LLONG_MIN,LLONG_MAX);
    printf("\nThe size of Unsigned long long is %zu",sizeof(unsigned long long));
    printf("\nThe range of Unsigned long long is from %0 to %llu",ULONG_MAX);
    printf("\nThe size of Double is %zu",sizeof(double));
    printf("\nThe range of Double is from %e to %e",DBL_MIN,DBL_MAX);
    printf("\nThe size of Long Double is %zu",sizeof(long double));
    printf("\nThe range of Long Double is from %d to %d",LDBL_MIN,LDBL_MAX);
    printf("The program is made by Dev Bhatia 25TCEOLE");
}
