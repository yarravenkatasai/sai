#include<stdio.h>
void main()
{  
     int a,b,c,d,e,f,g,h;
    printf("enter a and b value");
	scanf("%d%d",&a,&b); 
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	h=-b;
	printf("%d+%d",a,b,c);
	printf("%d-%d",a,b,d);
	printf("%d*%d",a,b,e);
	printf("%d/%d",a,b,f);
	printf("%d%%d",a,b,g);
	printf("enter negitive value %d is -%d",b,h);
}
