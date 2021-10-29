#include<stdio.h>
int main()
{
  int n,i,factor=0;
  printf("Enter any number:");
  scanf("%d",&n);
  for(i=1;i<=n/2;i++)
    {
      if(n%i==0)
      factor++;
    }
printf("Number of Factors are:%d",factor+1);
if(factor==1)
 printf("\nPrime Number.");
 else printf("\nComposite Number.");
  return 0;
}
