#include<stdio.h>
#include<math.h>
int main()
{
float x1,x2,y1,y2,k;
printf("enter the value of x1");
scanf("%f",&x1);
printf("enter the value of x2");
scanf("%f",&x2);
printf("enter the value of y1");
scanf("%f",&y1);
printf("enter the value of y2");
scanf("%f",&y2);
k=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("%f",k);

}

