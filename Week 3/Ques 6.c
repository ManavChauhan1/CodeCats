#include<stdio.h>
void main()
{
    int n;
    printf("Enter number of elements in the array:");
    scanf("%d",&n);
    int a[n],i,ele,count=0;
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i);
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched:");
    scanf("%d",&ele);
       for(i=0;i<n;i++)
       {
          if(a[i]==ele)
            count+=1;
       }
       printf("%d occured %d times in the list.",ele,count);
}
