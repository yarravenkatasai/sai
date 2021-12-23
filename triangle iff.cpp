#include<stdio.h>
main()
{
int a,b,c,angle;
printf("enter the values of the angles");
scanf("%d%d%d",&a,&b,&c);
angle=a+b+c;
if(a<=180 && b<=180 && c<=180)
printf("%d it is a triangle");
else
printf("%d it is not a triangle");
}
