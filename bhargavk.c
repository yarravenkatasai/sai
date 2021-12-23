#include<stdio.h>
main()
{
	int c,s,n,x;
	scanf("%d",&n);
	c=0;
	s=0;
	while(c<n)
	{
		printf("\n enter x");
		scanf("%d",&x);
		s=s+x;
		c++;
	}
	printf("s=%d",s);
}
