#include<stdio.h>
void main()
{
    int n;
    printf("Enter Number of Elements:");
    scanf("%d",&n);
    int a[n],i,j,k,temp;
    printf("\nEnter List Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter Number of Right Rotations:");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        temp=a[n-1];
        for(j=n-1;j>0;j--)
        {
            a[j]=a[j-1];
        }
        a[j]=temp;
    }
    printf("\nElements after Rotation:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}
