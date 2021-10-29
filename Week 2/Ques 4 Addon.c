#include<stdio.h>
int main()
{
 int n,a,i,factor;
 printf("Enter any number:");
 scanf("%d",&a);
 for(n=1;n<=a;n++)
   {
     factor=0;
     for(i=1;i<=n/2;i++)
       {
         if(n%i==0)
           factor++;
       }
       if(factor==1)
        printf("%d\n",n);
   }
 return 0;
}
