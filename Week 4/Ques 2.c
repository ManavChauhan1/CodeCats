#include<stdio.h>
void main()
{
    int n;
    printf("Enter Size of array:");
    scanf("%d",&n);
    int a[n],i,j,k,count,freq[n];
    printf("Enter Array Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
          count=0;
          for(j=n-1;j>=0;j--)
           {
                 if(a[i]==a[j])
                  {
                    count++;
                  }
                  freq[i]=count;
           }

    }
    for(i=0;i<n;i++)
    {
        printf("\nFrequency of %d is:%d",a[i],freq[i]);
    }
}

