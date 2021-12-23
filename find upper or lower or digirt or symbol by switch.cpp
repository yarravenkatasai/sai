#include<stdio.h>
int main()
{
char k;
printf("enter the character");
scanf("%c",&k);
switch(k)
{
    case 'a'...'z':
    printf("lower case");
    break;
    case 'A'...'Z':
    printf("upper case");
    break;
    case '0'...'9':
    printf("digit");
    break;
    default:
    printf("symbol");

}
}
