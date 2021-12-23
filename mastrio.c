#include<stdio.h>
void main()
{
	int n,n1,r,s;
	scanf("%d%d%d",&n,&n1,&r,&s);
	n1=n;
	while(n>0)
	{
		r=n%10;
		s=s*r+r+r;
		n=n/10;
	}
	if (n1==s)
	printf("amstrong");
	else
	printf("not amstrong");
}
