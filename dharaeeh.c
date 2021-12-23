#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,d,ch,x,y;
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		ch=1;
	}
	else if(d==0)
	{
		ch=2;
	}
	else
	{
		ch=3;
	}
	switch(ch)
	{
		case 1:printf("roots are real and distinct");
		x=(-b+sqrt(d))/(2*a);
		y=(-b-sqrt(d))/(2*a);
		printf("\nthe roots are %d and %d",x,y);
		break;
		case 2:printf("the roots are reeal and equal");
		x=-b/(2*a);
		printf("\nthe roots are %d and %d",x,x);
		break;
		case 3:printf("the roots are imaginary");
		break;
	}
}
