#include<stdio.h>
int main()
{
long long x,w,m,iw,im,lm,lw;
/*
 x = population,w=Woman,m = Man ,
 iw = Illiterate women,im = Illiterate men,
 lw = literate woman, lm= literate man
 */
x=1441981744;
w=x*48.4/100;
m=x-w;
lw=w*62.84/100;
lm = m*80.95/100;
iw = w -lw;
im = m - lm;
printf("The number of illiterate men are %lld and illiterate women are %lld",im,iw);
printf("\nThis program is made by Dev Bhatia from Computer Engineering");
return 0;
}
