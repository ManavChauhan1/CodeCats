#include<stdio.h>
void main()
{
  int n;
  printf("Enter number of elements in Array:");
  scanf("%d",&n);
  int a[n],i;
  for(i=0;i<n;i++)
    {
      printf("Enter elements %d:",i+1);
      scanf("%d",&a[i]);
    }
  for(i=n-1;i>=0;i--)
     {
       printf("%d\n",a[i]);
     }
}
