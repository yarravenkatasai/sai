#include<stdio.h>
int main(void)
{
	float principle;
	float time;
	float rate;
	float SI;
	printf("enter principle amount:");
	scanf("%f",&principle);
	printf("enter time:");
	scanf("%f",&time);
	printf("enter rate:");
	scanf("%f",&rate);
	SI=(principle*time*rate)/100;
	printf("Simple Interest=%f",SI);
	return 0;
}
