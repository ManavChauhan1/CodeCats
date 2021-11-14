#include<stdio.h>
void main()
{
    int n;
    printf("Enter Number of elements:");
    scanf("%d",&n);
    int a[4],i,ele,count=0;
    printf("Enter Elements in Sorted Order:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Element to be Searched:");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
          {
              printf("Element occurs on %d Position",i);
              count++;
          }
    }
    if(count==0)
    {
       for(i=0;i<n;i++)
       {
           if(ele>a[i] && ele<a[i+1])
            printf("Elements can be added at %d Position",i+1);
       }
    }
}
