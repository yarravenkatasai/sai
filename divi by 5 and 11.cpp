#include<stdio.h>
int main()
{
int a;
printf("enter the values of numbers");
scanf("%d",&a);
if(a%5==0 && a%11==0)
{
printf("%d divisible by both 5 and 11",a);	
	}	
else
{
printf("it is not divisible by both 5 and 11");
	
	}	
}
