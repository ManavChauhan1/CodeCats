#include<stdio.h>
int main()
{
  int num,fact=1;
  printf("Enter any number:");
  scanf("%d",&num);
  while(num>=1)
  {
    fact=fact*num;
    num--;
   }
   printf("Fact is %d",fact);
  return 0;
}
