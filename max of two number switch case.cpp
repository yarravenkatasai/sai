#include<stdio.h>
main()
{
int a,b;
printf("enter any two numbers");
scanf("%d %d",&a,&b);
switch(a>b)
{
case '1':
printf("maximum number is %d",a); 
break;
default:
printf("minimum number is %d",b);  
}	
}

