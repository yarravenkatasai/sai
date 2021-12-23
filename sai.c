#include<stdio.h>
main()
{
    int a,b,c,avg,f;
	scanf("%d%d%d",&a,&b,&c);
	avg=(a+b+c)/3;
	f=avg/10;
	switch(f)
	{
		case 10:
		case 9:printf("o grade");break;
		case 8:printf("a+grade");break;
		case 7:printf("a grade");break;
		case 6:printf("b+grade");break;
		case 5:printf("b grade");break;
		case 4:printf("c grade");break;
		default:printf("fail");
	}
}
