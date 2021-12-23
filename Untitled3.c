#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the vaue of b:");
	scanf("%d",&b);
	printf("enter the value of c:");
	scanf("%d",&c);
	if(a>>b&&a>>c)
	printf("value of a is maximum");
	else if(b>a&&b>c)
	printf("value of b is maximum");
	else
	printf("value of c is maximum");
	return 0;
}
