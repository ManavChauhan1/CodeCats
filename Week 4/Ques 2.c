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
        count=1;
        if(a[i]!=-1)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    a[j]=-1;
                }
                freq[i]=count;
            }

        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
            printf("\nFrequency of %d is:%d",a[i],freq[i]);
    }
}

