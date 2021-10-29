#include<stdio.h>
int main()
{
 int base,exp,power=1,i;
 printf("Enter Number,Power:");
 scanf("%d%d",&base,&exp);
 for(i=1;i<=exp;i++)
   {
    power=power*base;
   }
   printf("\n%d",power);
 return 0;
}
