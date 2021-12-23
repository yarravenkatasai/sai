#include<stdio.h>
main()
{
char k;
int a,b;                   
printf("enter the character");
scanf("%c",&k);
printf("enter the values of number");
scanf("%d%d",&a,&b);
switch(k)
{
	case '+':
		printf("sum of two numbers %d",a+b);
		break;
	case '-':
	    printf("subraction of two numbers %d",a-b);
		break;
	case '*' :
		printf("multiplication of two numbers %d",a*b);
		break;
	case '%':
	    printf("division of two numbers %d",a%b);
		break;	
	}	
	
	
	
	
	

}
