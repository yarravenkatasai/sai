#include<stdio.h>
main()
{
int a,b,c;
printf("enter values of number");
scanf("%d% %d %d",&a,&b,&c);  
switch(a>b && a>c)
{
	case '0':
		printf("the max number is %d",a);
	break;
	switch(b>a)	
	case'1':
         printf("the max number is %d",b);
    break;
	switch(c>a)
	case'2':
	printf("the max number is %d",c);     
break;
default:
	printf("the num is min");
}
printf("the max number is %d",a); 

}
