#include<stdio.h>
int main()
{
char c;
int quantity,bill;
printf("f,b,p,s");
scanf("%c",&c);
switch (c)
 {
 	case 'f':
printf("you order french fries");
printf("enter quantity");
scanf("%d",&quantity);
bill=80*quantity;
break;
 	
 case 'b':
printf("you order burger");
printf("enter quantity");
scanf("%d",&quantity);
bill=150*quantity;
break;	
 
 case 'p':
printf("you order pizza");
printf("enter quantity");
scanf("%d",&quantity);
bill=280*quantity;
 break;
 
 case 's':
printf("you order sandwich");
printf("enter quantity");
scanf("%d",&quantity);
bill=100*quantity;
 break;
 default:
 printf("menu was not found");

 }
printf("total bill is %d",bill);
}
