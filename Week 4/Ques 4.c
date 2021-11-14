#include<stdio.h>
void main()
{
    int n;
    printf("Enter Number of Elements:");
    scanf("%d",&n);
    int a[n],i,j,t;
    printf("Enter Elements in Increasing Order:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Target:");
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==t)
                printf("Elements that give required answer are:[%d,%d]",i,j);
        }
    }
}
