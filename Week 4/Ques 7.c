#include<stdio.h>
void main()
{
  int i,st,n,pos;
  printf("Enter Starting Position:");
  scanf("%d",&st);
  printf("Enter Number of Jumps:");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
      if(st>=0)
      {
         if(i%4==0)
        {
          pos=st;
        }
      else if(i%4==1)
      {
          pos=st-i;
      }
      else if(i%4==2)
      {
          pos=st+1;
      }
      else if(i%4==3)
        pos=st+i+1;
      }
      else
      {
           if(i%4==0)
      {
          pos=st;
      }
      else if(i%4==1)
      {
          pos=st+i;
      }
      else if(i%4==2)
      {
          pos=st-1;
      }
      else if(i%4==3)
        pos=st-i-1;
      }
  }
  printf("Final Position:%d",pos);
}
