#include<stdio.h>
void main()
{
    int n;
    printf("Enter Number of Elements:");
    scanf("%d",&n);
    int a[n],i,j,temp=0;
    printf("Enter Elements(Only 0,1,2 are allowed):");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("Arranged List is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
