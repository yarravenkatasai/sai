#include<stdio.h>
int main()
{
float princple,time,rateofinterest,simpleinterest;
printf("enter the values of princple");
scanf("%f",&princple);
printf("enter the values of time");
scanf("%f",&time);
printf("enter the values of rate of interest");
scanf("%f",&rateofinterest);
simpleinterest=(princple*time*rateofinterest)/100;
printf("%f",simpleinterest);


}
