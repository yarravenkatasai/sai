#include<stdio.h>
#include<math.h>
int main()
{
float x,y,k;
printf("enter the values of x");
scanf("%f",&x);
printf("enter the values of y");
scanf("%f",&y);
k=sqrt((x*x+y*y)/(x*x)+1);
printf("%f",k);


}
