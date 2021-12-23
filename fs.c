#include<stdio.h>
main()
{
	int i,s,n;
	scanf("%d",&n);
	i=1;
	s=0;
	while(i<=n)
	{
		s=s+i;
		i=i+1;
	}
	printf("s=%d",s);
}
