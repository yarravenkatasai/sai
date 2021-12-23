#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values of numbers");
scanf("%d%d%d",&a,&b,&c);
if(b*b-4*a*c==0)
{
	printf("-b/(2*a)");
}
if(b*b-4*a*c>0)
{
	printf("-b+sqrt(b*b-4*a*c)/(2*a)");
	
}
if(b*b-4*a*c<0)
{
	printf("-b+isqrt(b*b-4*a*c)/(2*a)");
	
}
}
