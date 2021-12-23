#include<stdio.h>
int main()
{	
	int i,n,k,sum=0,avg;
	printf("how many numbers");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&k);
		sum=sum+k;
		printf("sum=%d",sum);
		avg=sum/n;
		printf("%d",avg);
	}
printf("sum of numbers%d",sum);
printf("%d",avg);
}
