#include<stdio.h>
#include<math.h>

int main()
{
int x1,x2,y1,y2,c;
printf("enter the values of x1,x2,y1,y2");
scanf("%d",&x1,x2,y1,y2);
c=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("c=%d",c);
}


