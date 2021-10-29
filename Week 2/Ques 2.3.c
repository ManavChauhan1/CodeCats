#include<stdio.h>
int main()
{
  int num,fact=1;
  printf("Enter any number:");
  scanf("%d",&num);
  do{
    fact=fact*num;
    num--;
   }while(num>=1);
   printf("Fact is %d",fact);
  return 0;
}

