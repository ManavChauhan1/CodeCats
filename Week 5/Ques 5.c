#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of Elements:");
    scanf("%d",&n);
    int a[n],i,s=0;
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int *p=a;
    printf("Entered Elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }

}
