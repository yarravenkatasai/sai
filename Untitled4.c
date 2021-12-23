#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three sides of the triangle:");
	scanf("%d %d %d",&a,&b,&c);
	if ((a==b)&&(a==c))
	{
		printf("it is an equilateral triangle\n");
	}
	else if (a==c&&a!=b||b==a&&b!=c||c==b&&c!=a)
	{
		printf("it is an isoceles triangle");
	}
	if(a!=b&&a!=c&&b!=c)
	{
		printf("it is a scalene triangle");
	}
	return 0;
}
