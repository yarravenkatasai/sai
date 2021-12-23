#include<stdio.h>
main()
{
	int c,s,lb,ub;
	scanf("%d%d",&lb,&ub);
	c=lb;
	s=0;
	while(c<=ub)
	{
		s=s+c;
		c++;
	}
	printf("s=%d",s);
}
