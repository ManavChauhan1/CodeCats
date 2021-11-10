#include<stdio.h>
void main()
{
   int n;
   char f;
   printf("Enter Upside Face(Only H/T):");
   scanf("%c",&f);
   printf("Enter Number of Dice:");
   scanf("%d",&n);

      if(n%2==0)
      {
          printf("Number of Heads=%d",n/2);
          printf("Number of Tails=%d",n/2);
      }
      if(n%2!=0)
      {
          if(f==72||f==104)
          {
              printf("Number of Tails=%d",(n+1)/2);
              printf("\nNumber of Heads=%d",(n-1)/2);
          }
          else if(f==84||f==116)
          {
              printf("Number of Tails=%d",(n-1)/2);
              printf("\nNumber of Heads=%d",(n+1)/2);
          }
          else printf("Wrong Input.");
      }
}
