#include<stdio.h>
void main()
{
    int n;
    printf("Enter number of elements in the array:");
    scanf("%d",&n);
    int a[n],i,sum=0,esum=0,osum=0;
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
        if(a[i]%2==0)
            esum=esum+a[i];
        if(a[i]%2!=0)
            osum=osum+a[i];
    }
    printf("Sum of all Elements:%d",sum);
    printf("\nSum of Even Elements:%d",esum);
    printf("\nSum of Odd Elements:%d",osum);
}
