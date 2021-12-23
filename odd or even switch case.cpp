#include<stdio.h>
main()
{
	
  int k;
  printf("enter value of k");
  scanf("%d",&k);
  switch(k%2)
  {
   case 0:
   	      printf("it is a even number");
   	      break;
   	case 1:
	      printf("it is a odd number");
		  break;      
  }

}
