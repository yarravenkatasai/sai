#include<stdio.h>
int main()
{
int i=1,sum=0,n;
printf("enter the n value");
scanf("%d",&n);
while(i<n)
{
	if (n%i==0)
	{
		sum=sum+i;
	i++;
}
    
		else i++;
		if(sum==n)
		{
			printf(" %d perfect number",n);
			
		}
	else 
	printf("%d not perfect number",n);
}
}
