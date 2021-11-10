#include<stdio.h>
void main()
{
    int a[10],i,sum=0;
    for(i=0;i<=9;i++)
    {
        printf("Enter Array Element:");
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum of all elements=%d",sum);
}
