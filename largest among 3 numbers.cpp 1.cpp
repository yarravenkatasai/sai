#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values of the numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
	printf("%d is the largest",a);
}
	else if(b>a && b>c)
{
	printf("%d is the largest",b);
}
 else(c>a && c>b)
{
 	printf("%d is the largest",c);
}
}
