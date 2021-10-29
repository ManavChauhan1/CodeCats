#include<stdio.h>
int main()
{
  int n,rem,sum=0,m;
  printf("Enter any number:");
  scanf("%d",&n);
  m=n;
  while(n>0)
  {
   rem=n%10;
   sum=sum+rem*rem*rem;
   n=n/10;
  }
   if(sum==m)
   printf("Number is Armstrong");
   else printf("Number is not Armstrong");
  return 0;
}
