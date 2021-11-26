//Program to find sum of odd and even elements in array using pointer
#include<stdio.h>
void main()
{
    int n;
    printf("Enter Number of Elements:");
    scanf("%d",&n);
    int a[n],i;
    int esum=0,osum=0;
    int *p=a;
    printf("Enter array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",p);
        p++;
    }
    p=&a[0];
    for(i=0;i<n;i++)
    {
        if(((*p)%2)==0)
            esum=esum+*p;
        else
            osum=osum+*p;
            p++;
    }
    printf("\nSum of Even elements:%d",esum);
    printf("\nSum of Odd elements:%d",osum);
}
