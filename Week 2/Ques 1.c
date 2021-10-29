#include<stdio.h>
int main()
{
  int n,i,sum=0;
  printf("Enter n:");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
    {
      printf("%d\n",i);
      sum=sum+i;
    }
   printf("Sum is %d",sum);
  return 0;
}
