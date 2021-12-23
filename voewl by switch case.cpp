#include<stdio.h>
main()
{
  char k;
  printf("enter value of k");
  scanf("%c",&k);

  switch(k)
  {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   printf("character is a vowel");
   break;
   default: 
   printf("character is a consonant");
   break;
  }
}
